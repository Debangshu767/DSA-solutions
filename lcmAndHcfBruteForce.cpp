vector<long long> lcmAndGcd(long long a , long long b) {
        // code here
        vector<long long int> ans;
        for(int i = 2;i<=a*b;i++)
        {
            if(a%i == 0 && b%i == 0)
                {   ans.push_back(i);
                    break;
                }
        }
        
        for(int i = 1;i<=a*b;i++)
        {
            if(i%a == 0 && i%b == 0)
                {   ans.push_back(i);
                    break;
                }
        }
        
        return ans;
    }