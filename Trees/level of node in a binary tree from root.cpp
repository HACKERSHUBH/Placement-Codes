int level(struct Node *root, int target, int k)
{
	if(root==NULL)
	return -1;
	
	if(root->data == target)
	return k;
	
	int level1 = level(root->left,target,k+1);
	// if it is present in left subtree
	if(level1 != -1)
	return level1;
	// then search it in right subtree
	return level(root->right,target,k+1);
	
}
int getLevel(struct Node *node, int target)
{
	return level(node,target,1);
}
