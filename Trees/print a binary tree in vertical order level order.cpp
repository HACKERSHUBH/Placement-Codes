
// printing of binary tree in vertical order using queue
void verticalOrder(Node *root)
{
    int hd=0;
    map<int,vector<Node *>>m;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,hd));
    while(!q.empty()){
        pair<Node*,int> t = q.front();
        q.pop();
        Node*n = t.first;
        hd=t.second;
        m[hd].push_back(n);
        if(n->left){
            q.push(make_pair(n->left,hd-1));
        }
        if(n->right){
            q.push(make_pair(n->right,hd+1));
        }
    }
    for(auto it = m.begin();it!=m.end();it++){
        for(int i=0;i<it->second.size();i++){
            cout<<it->second[i]->data<<" ";
        }
        cout<<"$";
    }
}

/*
void verticalOrder(Node *root)
{
    //Your code here
   queue<pair<Node*,int>>myQueue;
    map<int,vector<int>>m;
    myQueue.push(make_pair(root,0));
    while(!myQueue.empty())
    {
        pair<Node*,int>temp=myQueue.front();
        myQueue.pop();
        int hd=temp.second;
        Node* n=temp.first;
        m[hd].push_back(n->data);
        if(n->left)
            myQueue.push(make_pair(n->left,hd-1));
        if(n->right)
            myQueue.push(make_pair(n->right,hd+1));
    }
   for(auto it=m.begin();it!=m.end();it++)
   {
       for(int j=0;j<it->second.size();j++)
       {
           cout<<it->second[j]<<" ";
       }
       cout<<'$';
   }
}*/
