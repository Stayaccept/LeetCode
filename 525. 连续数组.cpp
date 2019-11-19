class Solution {
public:
    map<int,int> mp;
    int findMaxLength(vector<int>& nums) {
        int i,tmp,ans;
        mp.clear();
        ans=tmp=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==1)
            tmp++;
            else
            tmp--;
            if(tmp==0){
                ans=max(ans,i+1);
                if(mp[tmp]==0)
                mp[tmp]=i+1;
            }
            else{
                if(mp[tmp]==0)
                mp[tmp]=i+1;
                else
                ans=max(ans,i+1-mp[tmp]);
            }
        }
        return ans;
    }
};
