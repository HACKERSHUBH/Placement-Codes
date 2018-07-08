// we have to take the new count variable for printing it level wise
void levelOrder(Node* node)
{
  if(node==NULL)
  return;
  // in queue it is the datatype
  queue<Node*>q;
  // initially push the root in the queue
  q.push(node);
  while(1)
  {
  int count=q.size();
  if(count==0)
  break;
  //for every level retrieve the nodes i.e level by level
  while(count>0)
  {
      node=q.front();
      cout<<node->data<<" ";
      q.pop();
      count--;
      if(node->left!=NULL)
      q.push(node->left);
      if(node->right!=NULL)
      q.push(node->right);
  }
  cout<<"$"<<" ";
  }
}

