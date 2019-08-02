class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i,tmp,sum;
        sum=0;
        for(i=0;i<nums.size();i++)
        sum+=nums[i];
        tmp=0;
        for(i=0;i<nums.size();i++){
            if(((sum-nums[i])%2==0)&&(tmp==(sum-nums[i])/2))
            return i;
            tmp+=nums[i];
        }
        return -1;
    }
};
