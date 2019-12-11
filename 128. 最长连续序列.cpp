class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int i,u,ans,pre;
        int INF=0x3f3f3f3f;
        sort(nums.begin(),nums.end());
        u=1,ans=0,pre=INF;
        for(i=0;i<nums.size();i++){
            if(nums[i]==pre)
            continue;
            if(nums[i]==pre+1){
                u++,pre++;
                ans=max(ans,u);
            }
            else{
                u=1,pre=nums[i];
                ans=max(ans,u);
            }
        }
        return ans;
    }
};
