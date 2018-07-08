//binary search tree maximum and minimum element
#include<bits/stdc++.h>
using namespace std;
//definition of node for binary search tree
struct BstNode {
	int data; 
	BstNode* left;
	BstNode* right;
};
// Function to create a new Node in heap
BstNode* GetNewNode(int data) {
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

int findmin(BstNode* root){
	if(root==NULL){
	cout<<"Tree is empty\n";
	return -1;
    }
	else if(root->left==NULL){
	return root->data;
    }
    return findmin(root->left);
}

int findmax(BstNode* root){
	if(root==NULL){
	cout<<"Tree is empty\n";
	return -1;
    }
	else if(root->right==NULL){
	return root->data;
    }
    return findmax(root->right);
}
int main() {
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
	/*root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);*/
	// Ask user to enter a number.  
	
	cout<<"Minimum value node is"<<" "<<findmin(root)<<"\n";
	cout<<"Maximum value node is"<<" "<<findmax(root);
}

