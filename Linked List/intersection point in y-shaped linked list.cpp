
int countnodes(Node *head)
{
    int count=0;
    for(;head;head=head->next,count++);
    return count;
}
int intersect(int d,Node*head1,Node *head2)
{
    for(int count=0;count<d;count++,head1=head1->next)
    if(!head1)
     return -1;
     
    for(;head1 && head2; head1=head1->next,head2=head2->next)
      if(head1==head2)
        return head1->data;
          
    return -1;    
}
int intersectPoint(Node* head1, Node* head2)
{ 
   int l=countnodes(head1);
   int m=countnodes(head2);
   int d=abs(l-m);
   //cout<<d;
   return (l>m)? intersect(d,head1,head2):intersect(d, head2, head1);
   
}

