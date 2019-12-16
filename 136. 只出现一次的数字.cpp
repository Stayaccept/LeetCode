class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,ans=0;
        for(i=0;i<nums.size();i++)
        ans^=nums[i];
        return ans;
    }
};
