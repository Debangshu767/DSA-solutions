long long divsum(int num)
{
    int ans = 0;
    for(int i = 1;i<=num;i++)
    {
        if(num%i == 0)
            ans+=i;
    }
    
    return ans;
}
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        int ans = 0;
        for(int i = 1;i<=N;i++)
        {
            ans += divsum(i);
        }
        return ans;
    }