class Solution {
public:
    int dp[10005];
    map<int,int> mp;
    int deleteAndEarn(vector<int>& nums) {
        int i,n;
        n=nums.size();
        mp.clear();
        for(i=0;i<n;i++)
        mp[nums[i]]++;
        dp[1]=mp[1];
        for(i=2;i<=10000;i++)
        dp[i]=max(dp[i-2]+mp[i]*i,dp[i-1]);
        return dp[10000];
    }
};
