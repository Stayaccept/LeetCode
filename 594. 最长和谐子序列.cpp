class Solution {
public:
    map<int,int> mp;
    map<int,int>::iterator ite;
    int findLHS(vector<int>& nums) {
        int i,u,v,ans;
        mp.clear();
        for(i=0;i<nums.size();i++)
        mp[nums[i]]++;
        ans=0;
        for(ite=mp.begin();ite!=mp.end();ite++){
            u=ite->first;
            v=ite->second;
            if(mp[u-1]==0)
            continue;
            ans=max(ans,mp[u-1]+v);
        }
        return ans;
    }
};
