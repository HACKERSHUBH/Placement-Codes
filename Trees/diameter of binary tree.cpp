int height(Node *root)
{
if(root==NULL)
{
return 0;
}
return 1+ max(height(root->left),height(root->right));
}
int diameter(Node* node)
{
// Your code here
if(node==NULL)
{
return 0;
}
int lh = height(node->left);
int rh = height(node->right);
int ld = diameter(node->left);
int rd = diameter(node->right);
// (lh+rh+1) if longest path passes through root
// maximum of left dia and right dia if it doesnt pass through root + 1 for root
return max(lh+rh+1,max(ld,rd)+1);
}
