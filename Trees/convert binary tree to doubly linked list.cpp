void BToDLL(Node *root, Node **head)
{
 static Node *prev=NULL;
if(!root)return;
BToDLL(root->left,head);
if(!(*head))
*head=root;
else{
root->left=prev;
prev->right=root;
}
prev=root;
BToDLL(root->right,head);

}
/*
logic- go to the leftmost node recursively and if *head is not set then set this node to the root after that take
an temporary pointer that will store the address of root always and then recursate it to the right subtree 
*/