void removeTheLoop(Node *node)
{
     Node *slowptr,*fastptr;
     int flag=0;  //variable checking for existence of loop
     for(fastptr=node,slowptr=node; slowptr && fastptr && fastptr->next;)
     {
          fastptr=fastptr->next->next;
          slowptr=slowptr->next;
          if(slowptr==fastptr)
          {
              flag=1;
              break;
          }
     }
      if(flag==1)
      {
          for(slowptr=node; slowptr!=fastptr;)
          {
              slowptr=slowptr->next;
              fastptr=fastptr->next;
          }
          slowptr->next=NULL;
      }
}

// to-do problem
//add two numbers using a linked list
