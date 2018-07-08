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
