class Solution {
public:
    int dp[1005][2];
    int INF=0x3f3f3f3f;
    int minSwap(vector<int>& A, vector<int>& B) {
        int i,n;
        n=A.size();
        memset(dp,INF,sizeof(dp));
        dp[0][0]=0,dp[0][1]=1;
        for(i=1;i<n;i++){
            if(A[i]>A[i-1]&&B[i]>B[i-1]){
                dp[i][0]=min(dp[i][0],dp[i-1][0]);
                dp[i][1]=min(dp[i][1],dp[i-1][1])+1;
            }
            if(A[i]>B[i-1]&&B[i]>A[i-1]){
                dp[i][0]=min(dp[i][0],dp[i-1][1]);
                dp[i][1]=min(dp[i][1],dp[i-1][0])+1;
            }
        }
        return min(dp[n-1][0],dp[n-1][1]);
    }
};
