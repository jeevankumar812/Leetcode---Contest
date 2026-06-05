class Solution {
public:
    long long M=1e9 +7;

    vector<vector<int>>directions{
            {-1,0},
    {0,-1},         {0,1},
            {1,0}       
    };


    bool isSafe(int i, int j,int n, int m)
    {
        return i<n && j<m && i>=0 && j>=0;
    }
    int dfs(vector<vector<int>>&grid, int i, int j,int n, int m,
    vector<vector<int>>&dp)
    {

        if(dp[i][j]!=-1)
        return dp[i][j];

        int ans=1;
        for(auto &dir:directions)
        {
            int new_i=i+dir[0];
            int new_j=j+dir[1];

            if((isSafe(new_i,new_j,n,m))&& grid[new_i][new_j]<grid[i][j])
            {
                ans=(ans+dfs(grid,new_i,new_j,n,m,dp))%M;
            }
        }
        return dp[i][j]=ans;
    }

    int countPaths(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int res=0;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                res=(res+dfs(grid,i,j,n,m,dp))%M;
            }
        }
        return res;
    }
};
