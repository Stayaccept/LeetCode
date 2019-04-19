class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int i,j,n,u,v,ans=0;
        n=grid.size();
        for(i=0;i<n;i++){
            u=v=0;
            for(j=0;j<n;j++){
                if(grid[i][j]!=0)
                ans++;
                u=max(u,grid[i][j]);
                v=max(v,grid[j][i]);
            }
            ans+=u;
            ans+=v;
        }
        return ans;
    }
};
