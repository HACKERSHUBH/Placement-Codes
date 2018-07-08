truct Node* sym(struct Node* root)
{
if(root==NULL)return NULL;
struct Node *node = new struct Node;
node->key=root->key;
node->left=sym(root->right);
node->right=sym(root->left);
return node;
}

bool isIdentical(Node *r1, Node *r2)
{
    // if both pointers are null
    if(!r1 && !r2)
    return 1;
    
    // if pointers are not null
    if(r1 && r2)
    {
        //check all the three conditions if any one of them is wrong then it returns 0
        //the three conditions are written as follows
        return (r1->data == r2->data) && isIdentical(r1->left,r2->left)
        && isIdentical(r1->right,r2->right);
    }
    return 0;
}
//main isSymmetric function is here
bool isSymmetric(struct Node* root)
{
// rot is the pointer of symmetric tree 
struct Node *rot=sym(root);
if(isIdentical(root,rot))return true;
return false;
}
