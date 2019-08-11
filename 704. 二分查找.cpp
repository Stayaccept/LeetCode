class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l,r,mid,ans;
        l=0,r=nums.size()-1;
        while(l<=r){
            mid=(l+r)>>1;
            if(nums[mid]>=target){
                ans=mid     ;
                r=mid-1;
            }
            else
            l=mid+1;
        }
        if(nums[ans]!=target)
        return -1;
        return ans;
    }
}; 
