class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int i,j,u;
            vector<int> res;
            map<int,vector<int> > mp;
            for(i=0;i<nums.size();i++)
            mp[nums[i]].push_back(i);
            for(i=0;i<nums.size();i++){
                u=target-nums[i];
                for(j=0;j<mp[u].size();j++){
                    if(mp[u][j]<=i)
                    continue;
                    res.push_back(i);
                    res.push_back(mp[u][j]);
                    return res;
                }
            }
        }
};
