class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int i,n,ls,rs,ans;
        n=nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        ans=0;
        for(i=0;i<n;i++){
            ls=i+1,rs=n-1;
            while(ls<rs){
                if(nums[ls]+nums[rs]>nums[i]){
                    ans+=(rs-ls);
                    ls++;
                }
                else
                rs--;
            }
        }
        return ans;
    }
};
