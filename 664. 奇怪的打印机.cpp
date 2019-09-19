/*
 * @lc app=leetcode.cn id=664 lang=cpp
 *
 * [664] 奇怪的打印机
 */
class Solution {
public:
    int dp[105][105]; 
    int strangePrinter(string s) {
        int i,j,k,p,n;
        n=s.size();
        if(n==0)
        return 0;
        for(i=0;i<n;i++)
        dp[i][i]=1;
        for(i=2;i<=n;i++){
            for(j=0;j+i-1<n;j++){
                k=j+i-1;
                dp[j][k]=1+dp[j+1][k];
                for(p=j+1;p<=k;p++){
                    if(s[j]==s[p])
                    dp[j][k]=min(dp[j][k],dp[j+1][p]+dp[p+1][k]);
                }
            }
        }
        return dp[0][n-1];
    }
};

