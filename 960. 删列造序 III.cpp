class Solution {
public:
    int dp[105];
    vector<int> pre[105];
    int minDeletionSize(vector<string>& A) {
        int i,j,k,m,n,ans,sig;
        m=A.size();
        n=A[0].size();
        for(i=1;i<n;i++){
            pre[i].clear();
            for(j=0;j<i;j++){
                sig=0;
                for(k=0;k<m;k++){
                    if(A[k][i]<A[k][j]){
                        sig=1;
                        break;
                    }
                }
                if(sig==0)
                pre[i].push_back(j);
            }
        }
        for(i=0;i<n;i++)
        dp[i]=1;
        ans=1;
        for(i=1;i<n;i++){
            for(j=0;j<pre[i].size();j++)
            dp[i]=max(dp[i],dp[pre[i][j]]+1);
            ans=max(ans,dp[i]);
        }
        return n-ans;
    }
};
