#include<bits/stdc++.h>
using namespace std;
 
 
/* A binary tree node has data, pointer to left child 
   and a pointer to right child */
//definition of node for binary search tree
struct BstNode {
	int data; 
	BstNode* left;         // here node is BstNode
	BstNode* right;
};
 
/* Compute the "maxDepth" of a tree -- the number of 
    nodes along the longest path from the root node 
    down to the farthest leaf node.*/
int maxDepth(struct BstNode* root) 
{
   if (root==NULL) 
       return -1;
   else
   {
       /* compute the depth of each subtree */
       int lDepth = maxDepth(root->left);
       int rDepth = maxDepth(root->right);
 
       /* use the larger one */
       if (lDepth > rDepth) 
           return(lDepth+1);
       else return(rDepth+1);
   }
} 
 
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
   
   BstNode* GetNewNode(int data) 
   {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
   }

   
   // To insert data in BST, returns address of root node 
BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) { // empty tree
		root = GetNewNode(data);
	}
	// if data to be inserted is lesser, insert in left subtree. 
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree. 
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}
   
int main()
{
    int i,n;
	cout<<"enter the number of nodes which you want to insert\n";
	cin>>n;
	BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	cout<<"enter the nodes which is to be inserted\n";
	for(i=0;i<n;i++)
	{
		int x;
		cin>>x;
		root=Insert(root,x);
	}
   
    cout<<"Hight of tree is"<<" "<<maxDepth(root);
   
    getchar();
    return 0;
}
