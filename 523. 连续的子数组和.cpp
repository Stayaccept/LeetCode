    class Solution {
    public:
        map<long long,int> mp;
        bool checkSubarraySum(vector<int>& nums, long long k) {
            int i,n;
            long long sum=0;
            n=nums.size();
            mp.clear();
            if(k==0){
                for(i=0;i<n;i++){
                    sum+=nums[i];
                    if((i-1>=0&&nums[i]==0&&nums[i-1]==0)||(i>=1&&sum==0))
                    return 1;
                    if(nums[i]==0)
                    continue;
                    if(mp[sum]!=0&&i+1-mp[sum]>=2)
                    return 1;
                    mp[sum]=i+1;
                }
            }
            else{
                for(i=0;i<n;i++){
                    sum+=nums[i];
                    if((mp[sum%k]!=0&&i+1-mp[sum%k]>=2)||(i>=1&&sum%k==0))
                    return 1;
                    if(mp[sum%k]==0)
                    mp[sum%k]=i+1;
                }
            }
            return 0;
        }
    };
