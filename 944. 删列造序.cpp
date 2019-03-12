class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int i,j,n,m,ans;
        m=A.size();
        n=A[0].size();
        if(m==1)
        return 0;
        ans=0;
        for(i=0;i<n;i++){
            for(j=1;j<m;j++){
                if(A[j][i]<A[j-1][i]){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};
