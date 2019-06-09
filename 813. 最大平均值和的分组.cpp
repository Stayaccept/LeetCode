class Solution {
public:
    double sum[105],dp[105][105];
    double largestSumOfAverages(vector<int>& A, int K) {
        int i,j,k,n;
        memset(dp,0,sizeof(dp));
        n=A.size();
        sum[0]=A[0];
        for(i=1;i<n;i++)
        sum[i]=sum[i-1]+A[i];
        for(i=0;i<n;i++){
            dp[i][1]=sum[i]/(i+1);
            for(j=2;j<=i+1;j++){
                for(k=0;k<i;k++){
                    dp[i][j]=max(dp[i][j],dp[k][j-1]+(sum[i]-sum[k])*1.0/(i-k));
                }
                
            }
        }
        return dp[n-1][K];
    }
};
