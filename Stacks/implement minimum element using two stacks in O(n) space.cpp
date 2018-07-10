void push(int a)
{
      s.push(a);

}
bool isFull(int n)
{
     if(s.size()==n)
      return true;

     return false;
}
bool isEmpty()
{
    if(s.size()==0)
     return true;
    return false;
}
int pop()
{
    int x=s.top();
    s.pop();
    return x;
}
int getMin()
{
    int m=s.top();
   while(!s.empty())
   {
       m=min(m,s.top());
       s.pop();
   }
   return m;
}


/*
class SpecialStack: public Stack
{
    Stack min;
public:
    int pop();
    void push(int x);
    int getMin();
};
 
/* SpecialStack's member method to insert an element to it. This method
   makes sure that the min stack is also updated with appropriate minimum
   values */
/*void SpecialStack::push(int x)
{
    if(isEmpty()==true)
    {
        Stack::push(x);
        min.push(x);
    }
    else
    {
        Stack::push(x);
        int y = min.pop();
        min.push(y);
        if( x < y )
          min.push(x);
        else
          min.push(y);
    }
}
 
/* SpecialStack's member method to remove an element from it. This method
   removes top element from min stack also. */
/*int SpecialStack::pop()
{
    int x = Stack::pop();
    min.pop();
    return x;
}
 
/* SpecialStack's member method to get minimum element from it. */
/*int SpecialStack::getMin()
{
    int x = min.pop();
    min.push(x);
    return x;
}*/
