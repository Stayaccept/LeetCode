/*
 * @lc app=leetcode.cn id=665 lang=cpp
 *
 * [665] 非递减数列
 */
class Solution {
public:
    int dp[10005];
    bool checkPossibility(vector<int>& nums) {
        int i,u,n;
        int INF=0x3f3f3f3f;
        n=nums.size();
        memset(dp,INF,sizeof(dp));
        for(i=0;i<n;i++)
        *upper_bound(dp,dp+n,nums[i])=nums[i];
        u=lower_bound(dp,dp+n,INF)-dp;
        if(u>=n-1)
        return 1;
        return 0;
    }
};

