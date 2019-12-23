class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l,r,cur;
        l=cur=0;
        r=nums.size()-1;
        while(cur<=r){
            if(nums[cur]==0){
                swap(nums[cur],nums[l]);
                l++,cur++;
            }
            else if(nums[cur]==1)
            cur++;
            else{
                swap(nums[cur],nums[r]);
                r--;
            }
        }
    }
};
