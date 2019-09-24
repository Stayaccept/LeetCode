/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i,n,tmp,ans;
        n=nums.size();
        tmp=0;
        for(i=0;i<k;i++)
        tmp+=nums[i];
        ans=tmp;
        for(i=k;i<n;i++){
            tmp=tmp+nums[i]-nums[i-k];    
            ans=max(ans,tmp);
        }
        return ans*1.0/k;
    }
};

