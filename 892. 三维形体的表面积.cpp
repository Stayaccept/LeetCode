class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int i,j,n,ans;
        ans=0;
        n=grid.size();
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(grid[i][j]>0)
                ans+=(grid[i][j]*4+2);
                if(j+1<n)
                ans-=(min(grid[i][j],grid[i][j+1])*2);
                if(i+1<n)
                ans-=(min(grid[i][j],grid[i+1][j])*2);
            }
        }
        return ans;
    }
};
