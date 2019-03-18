class Solution {
public:
    int findMin(vector<int>& nums) {
        int i,l,r,n,mid,ans;
        n=nums.size()-1;
        l=0,r=n;
        while(l<=r){
            mid=(l+r)/2;
            if(nums[mid]<=nums[n]){
                ans=mid;
                r=mid-1;
            }
            else
            l=mid+1;
        }
        return nums[ans];
    }
};
