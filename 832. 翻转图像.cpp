class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int i,j,n,m;
        n=A.size();
        m=A[0].size();
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
            A[i][j]=1-A[i][j];
            reverse(A[i].begin(),A[i].end());
        }
        return A;
    }
};
