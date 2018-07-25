void countDistinct(int A[], int k, int n)
{
    for(int i=0;i<=n-k;++i)

    {
        // we have to take new set at every iteration
        unordered_set<int>s;

        for(int j=i;j<k+i;j++)
        {
        s.insert(A[j]);
        }
        cout<<s.size()<<" ";

    }
}
