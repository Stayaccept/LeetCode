/*
 * @lc app=leetcode.cn id=645 lang=cpp
 *
 * [645] 错误的集合
 */
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long i,n,u,v,A,B;
        vector<int> ans;
        n=nums.size();
        u=v=0;
        for(i=0;i<n;i++){
            u+=nums[i];
            v+=(nums[i]*nums[i]);
        }
        A=(n*(n+1)/2)-u;
        B=(n*(n+1)*(2*n+1)/6)-v;
        ans.push_back((B/A+A)/2-A);
        ans.push_back((B/A+A)/2);
        return ans;
    }
};

