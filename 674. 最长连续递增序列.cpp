/*
 * @lc app=leetcode.cn id=674 lang=cpp
 *
 * [674] 最长连续递增序列
 */
class Solution {
public:
    int dp[10005];
    int findLengthOfLCIS(vector<int>& nums) {
        int i,n,u,ans;
        u=ans=1,n=nums.size();
        if(n==0)
        return 0;
        for(i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                u++;
                ans=max(ans,u);
            }
            else
            u=1;
        }
        return ans;
    }
};

