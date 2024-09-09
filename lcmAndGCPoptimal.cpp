 vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        
        long long a = A;
        long long b = B;
        while(a > 0 && b>0)
        {
            a>b? a= a-b : b = b-a;
        }
        long long hcf =0;
        // cout<<a;
        // cout<<b;
        a!=0 ? hcf=a : hcf = b;
        
        long long lcm = (A*B)/hcf;
        
        return {lcm,hcf};
    }