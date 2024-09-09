// long long divsum(int num)
// {
//     long long ans = 0;
//     for(int i = 1;i<=sqrt(num);i++)
//     {
//         if(num%i == 0)
//         {
//             ans+=i;
//             if(i!=num/i)
//                 ans += num/i;
//         }
            
//     }
    
//     return ans;
// }
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long ans = 0;
        for(int i = 1;i<=N;i++)
        {
            ans += (N/i)*i;
        }
        return ans;
    }