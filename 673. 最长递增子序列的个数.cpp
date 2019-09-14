/*
 * @lc app=leetcode.cn id=673 lang=cpp
 *
 * [673] 最长递增子序列的个数
 */
class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int i,j,u,n,ans,res;
        int dp[2005],num[2005];
        n=nums.size(),ans=1;
        memset(num,0,sizeof(num));
        for(i=0;i<n;i++){
            u=0,dp[i]=1;
            for(j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            if(dp[i]==1)
            num[i]=1;
            for(j=0;j<i;j++){
                if(nums[i]>nums[j]&&dp[j]+1==dp[i])
                num[i]+=num[j];
            }
            ans=max(ans,dp[i]);
        }
        if(ans==1)
        return n;
        res=0;
        for(i=0;i<n;i++){
            if(dp[i]==ans)
            res+=num[i];
        }
        return res;
    }
};

