class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        int i,j,n,m,ans,tmp;
        n=A.size();
        m=A[0].size();
        for(i=n-2;i>=0;i--){
            A[i][0]=A[i][0]+min(A[i+1][0],A[i+1][1]);
            A[i][m-1]=A[i][m-1]+min(A[i+1][m-2],A[i+1][m-1]);
            for(j=1;j<m-1;j++){
                tmp=min(A[i+1][j-1],min(A[i+1][j],A[i+1][j+1]));
                A[i][j]+=tmp;
            }
        }
        ans=0x3f3f3f3f;
        for(i=0;i<m;i++)
        ans=min(ans,A[0][i]);
        return ans;
    }
};
