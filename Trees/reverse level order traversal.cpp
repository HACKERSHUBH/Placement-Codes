void reversePrint(Node *root)
{
    //Your code here
    if(root==NULL)
    return;
    queue<Node*> q;
    stack<Node*> s;
    q.push(root);
    while(!q.empty())
    {
        root=q.front();
        q.pop();
        // first add the right child and then left child
        if(root->right!=NULL)
        q.push(root->right);
        if(root->left!=NULL)
        q.push(root->left);
        s.push(root);
    }
    
    while(!s.empty())
    {
        root=s.top();
        //root is an pointer so we have to print its data 
        cout<<root->data<<" ";
        s.pop();
    }
    
}
