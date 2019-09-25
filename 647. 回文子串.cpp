/*
 * @lc app=leetcode.cn id=647 lang=cpp
 *
 * [647] 回文子串
 */
class Solution {
public:
    int dp[1005][1005];
    int countSubstrings(string s) {
        int i,j,n,ans;
        n=s.size();
        memset(dp,0,sizeof(dp));
        for(i=0;i<n;i++)
        dp[i][i]=1;
        ans=n;
        for(i=0;i<n;i++){
            for(j=0;j<i;j++){
                if(j+1==i){
                    if(s[i]==s[j])
                    dp[j][i]=1;
                }
                else{
                    if(s[i]==s[j])
                    dp[j][i]=dp[j+1][i-1];    
                }
                ans+=dp[j][i];
            }
        }
        return ans;
    }
};
