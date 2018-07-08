int detectloop(Node *list)
{
   //head is taken as list
   Node *fastptr,*slowptr;
   for(fastptr=list,slowptr=list; slowptr && fastptr && fastptr->next;)
     {
          fastptr=fastptr->next->next;
          slowptr=slowptr->next;
          if(slowptr==fastptr)
          return true;
     }
     return false;
   
}
