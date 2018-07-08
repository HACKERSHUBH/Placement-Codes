int getNthFromLast(Node *head, int n)
{
       if(n<0 || head==NULL)
       return -1;
       Node* q,*p;
       p=q=head;
       int count;
       for(count=0;count<n;count++)
       {
           if(p==NULL)
           return -1;
           p=p->next;
       }
       for(;p;p=p->next,q=q->next);
       return q? q->data:-1;
       
}
