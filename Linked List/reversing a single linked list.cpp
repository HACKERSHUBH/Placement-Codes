// here we are not returning anything. we are using void type function
void reverse(struct node **head_addr)
{
	struct node *currptr,*prevptr,*nextptr;
	currptr=*head_addr;
	prevptr=NULL;
	while(currptr)
	{
		nextptr=currptr->next;
		currptr->next=prevptr;
		prevptr=currptr;
		currptr=nextptr;
	}
	*head_addr=nextptr;
}

// here we are returning the head
Node* reverse(Node *head)
{
	Node *currptr,*prevptr,*nextptr;
	currptr=head;
	prevptr=NULL;
	while(currptr)
	{
		nextptr=currptr->next;
		currptr->next=prevptr;
		prevptr=currptr;
		currptr=nextptr;
	}
	head=prevptr;
	return head;
}
