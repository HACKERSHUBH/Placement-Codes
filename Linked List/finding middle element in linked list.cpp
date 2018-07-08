int getMiddle(Node *head)
{
   Node *fastptr,*slowptr;
   if(head==NULL)
   return -1;
   //when for loop is used with pointers then we have to put ; at the end
   for(fastptr=head,slowptr=head;fastptr && fastptr->next; )
    {
    	fastptr=fastptr->next->next;
		slowptr=slowptr->next;
	}
     return slowptr->data;
}

/*
int getMiddle(Node *head)
{
    int count = 0;
    Node *it = head;
    while(it != NULL)
    {
       count++;
       it = it->next;
    }
    
    int mid = count/2 +1;
    
    int pos = 1;
    it = head;
    while(pos != mid)
    {
        it = it->next;
        pos++;
    }
    
    return it->data;
}

*/