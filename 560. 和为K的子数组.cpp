class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i,n,ans,tmp;
        map<int,int> mp;
        mp.clear();
        n=nums.size();
        ans=tmp=0;
        mp[0]=1;
        for(i=0;i<n;i++){
            tmp+=nums[i];
            ans+=mp[tmp-k];
            mp[tmp]++;
        }
        return ans;
    }
};
