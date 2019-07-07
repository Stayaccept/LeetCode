class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        set<int> se;
        int i,j,n,m,p,q;
        n=matrix.size();
        m=matrix[0].size();
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                se.clear();
                for(p=i,q=j;p<n&&q<m;p++,q++)
                se.insert(matrix[p][q]);
                if(se.size()!=1)
                return 0;
            }
        }
        return 1;
    }
};
