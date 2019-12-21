class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> G;
        vector<vector<int>> ans;
        int i,j,n;
        n=nums.size();
        for(i=0;i<(1<<n);i++){
            G.clear();
            for(j=0;j<n;j++){
                if((i&(1<<j))==0)
                continue;
                G.push_back(nums[j]);
            }
            ans.push_back(G);
        }
        return ans;
    }
};
