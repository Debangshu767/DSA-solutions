 string armstrongNumber(int n) {
        // code here
        int temp = n;
        int ans = 0;
        while(temp >0)
        {
            int digit = temp%10;
             ans += pow(digit,3);
            temp = temp/10;
        }
        
        return ans == n ? "true" : "false";
    }