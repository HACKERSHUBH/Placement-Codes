void setarbpointer(Node* current)
     {
         while(current)
         {
             current->next->arb=current->arb->next;
             current=current->next->next;
         }
     }

void splitalternodes(Node *head, Node **head1, Node **head2)
{
    *head1 = head;
	*head2 = head->next;
	if(!head || !head->next)
		return;
	Node *tmp;	
	while(head) {
		tmp = head->next;
		head->next = tmp ? tmp->next: tmp;
		head = tmp;
	}
}
     
Node * copyList(Node *head)
{
     // Your code here
     Node * tmp,*currptr,*mainlist,*clonelist;
     //all the pointers are initialized with head
     currptr=mainlist=clonelist=tmp=head;
     while(currptr)
     {
         tmp=newNode(currptr->data);
         tmp->next=currptr->next;
         currptr->next=tmp;
         currptr=tmp->next;
     }
     //this loop creates the list which has nodes stayed in the middle of
     //original list
     setarbpointer(head);
     splitalternodes(head,&mainlist,&clonelist);
      return clonelist;
}
