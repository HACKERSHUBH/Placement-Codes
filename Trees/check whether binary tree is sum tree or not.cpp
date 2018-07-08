int sum( Node *root)
{
   if(root == NULL)
     return 0;
   return sum(root->left) + root->data + sum(root->right);
}


bool isSumTree(Node* root)
{
    int ls, rs;
 
    /* If node is NULL or it's a leaf node then
       return true */
       if(root==NULL)
       return true;
    if(root->left == NULL && root->right == NULL)
        return true;
 
   /* Get sum of nodes in left and right subtrees */
   ls = sum(root->left);
   rs = sum(root->right);
 
   /* if the node and both of its children satisfy the
       property return 1 else 0*/
    if((root->data == ls + rs)&&
            isSumTree(root->left) &&
            isSumTree(root->right))
        return true;
 
   return false;
}
