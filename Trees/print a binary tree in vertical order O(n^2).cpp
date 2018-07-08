// here it is the O(n^2) approach 
void findrange(Node* root,int* min,int * max,int d)
{
    if(root==NULL)
    return;
    if(d < *min)
    *min=d;
    else if(d > *max)
    *max=d;
    // recur throughout the complete tree
    findrange(root->left ,min,max,d-1);
    findrange(root->right ,min,max,d+1);
}

void printnode(Node* root, int i,int d)
{
    if(root==NULL)
    return;
    if(d==i)
    cout<<root->data<<" ";
    
    // recur through each left and right subtree
    
    printnode(root->left,i,d-1);
    printnode(root->right,i,d+1);
}
void verticalOrder(Node *root)
{
    //Your code here
    int min=0,max=0;
    //create the wrapper function and pass the address of max and min
    findrange(root,&min ,&max,0);
    // i is the index taken for every vertical line number
    for(int i=min; i<= max ; i++)
    {
        printnode(root,i,0);
        cout<<"$";
    }
}
