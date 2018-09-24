class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i,j,k,ans,len,tmp=0x3f3f3f3f;
        len=nums.size();
        sort(nums.begin(),nums.end());
        for(i=0;i<len;i++){
            if(i!=0&&nums[i]==nums[i-1])
            continue;
            j=i+1,k=len-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]<target){
                    if(tmp>target-nums[i]-nums[j]-nums[k]){
                        tmp=target-nums[i]-nums[j]-nums[k];
                        ans=nums[i]+nums[j]+nums[k];
                    }
                    j++;
                }
                else if(nums[i]+nums[j]+nums[k]>target){
                    if(tmp>nums[i]+nums[j]+nums[k]-target){
                        tmp=nums[i]+nums[j]+nums[k]-target;
                        ans=nums[i]+nums[j]+nums[k];
                    }
                    k--;
                }
                else
                return target;
            }
        }
        return ans;
    }
};
