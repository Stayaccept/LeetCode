class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        int i,j,n,m,u,ans;
        n=A.size();
        m=A[0].size();
        for(i=0;i<n;i++){
            if(A[i][0]==0){
                for(j=0;j<m;j++)
                A[i][j]=1-A[i][j];
            }
        }
        for(j=1;j<m;j++){
            u=0;
            for(i=0;i<n;i++)
            u+=A[i][j];
            if(n-u>u){
                for(i=0;i<n;i++)
                A[i][j]=1-A[i][j];
            }
        }
        ans=0;
        for(i=0;i<n;i++){
            u=0;
            for(j=0;j<m;j++)
            u=u*2+A[i][j];
            ans+=u;
        }
        return ans;
    }
};
