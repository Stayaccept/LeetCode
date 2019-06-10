class Solution {
public:
    int a[55],b[55];
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int i,j,n,m,ans;
        n=grid.size();
        m=grid[0].size();
        for(i=0;i<n;i++){
            a[i]=grid[i][0];
            for(j=0;j<m;j++)
            a[i]=max(a[i],grid[i][j]);
        }
        for(i=0;i<m;i++){
            b[i]=grid[0][i];
            for(j=0;j<n;j++)
            b[i]=max(b[i],grid[j][i]);
        }
        ans=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                ans+=(min(a[i],b[j])-grid[i][j]);
            }
        }
        return ans;
    }
};
