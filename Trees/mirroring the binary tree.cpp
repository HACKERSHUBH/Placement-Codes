void mirror(Node* node) 
{
    // in recursion we have to write base condition
     if(!node)
      return;
     else
     {
     mirror(node->left);
     mirror(node->right);
     Node* temp;
     temp=node->left;
     node->left=node->right;
     node->right=temp;
     }
}
