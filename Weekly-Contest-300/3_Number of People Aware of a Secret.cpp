class Solution {
public:
    int M=1000000007;


    int solve(int day, int n, int delay, int forget,vector<int>&dp)
    {
        if(day==1)
        return 1;

        if(dp[day]!=-1)
        return dp[day];

        int ans=0;
        for(int prev=day-forget+1;prev<=day-delay;prev++)
        {
            if(prev>0)
            {
                ans=(ans+solve(prev,n,delay,forget,dp))%M;
            }
        }
        return dp[day]=ans;
    }

    int peopleAwareOfSecret(int n, int delay, int forget) {
        
        vector<int>dp(n+1,-1);

        int res=0;
        for(int day=n-forget+1;day<=n;day++)
        {
            if(day>0)
            {
                res=(res+solve(day,n,delay,forget,dp))%M;
            }
        }
        return res;

    }
};
