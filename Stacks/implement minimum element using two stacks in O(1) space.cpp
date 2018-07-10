void push(int a)
{   
    if(s.empty())
    {
        s.push(a);
        m=a;
    }
    
    else if(a>=m)
    {
        s.push(a);
    }
    else
    {
        s.push(a-m);
        m=a;
    }
}
bool isFull(int n)
{
    if(s.size()==n)
        return true;
    else
        return false;
    
}
bool isEmpty()
{
    return s.empty();
}
int pop()
{   
    int h;
    if(s.empty())
    {    
    return -1;
    }    
    h=s.top();
    s.pop();
    
    if(h<m)
    {
        return m;
        m=m-h;
    }
    else
    {
        return h;
    }
}
int getMin()
{
   return m;
}

