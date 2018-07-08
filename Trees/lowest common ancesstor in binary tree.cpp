Node * LCA(Node* root ,int n1 ,int n2 )
{
   if(root==NULL)
   return root;
   if(root->data== n1|| root->data==n2)
   return root;
   //this function is returning pointer to NODE
   Node *left_lca= LCA(root->left, n1, n2);
   Node *right_lca= LCA(root->right, n1 ,n2);
   if(left_lca && right_lca)
    return root;
   else
    return (left_lca? left_lca:right_lca);
   
   
}
