class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int i,j,n,m;
        vector<int> G;
        vector<vector<int> > ans;
        n=A.size();
        m=A[0].size();
        for(i=0;i<m;i++){
            G.clear();
            for(j=0;j<n;j++)
            G.push_back(A[j][i]);
            ans.push_back(G);
        }
        return ans;
    }
};
