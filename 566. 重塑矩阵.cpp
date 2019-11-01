class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int i,j,n,m,cnt;
        vector<int> tmp;
        vector<vector<int>> ans;
        n=nums.size();
        m=nums[0].size();
        if(r*c>n*m)
        return nums;
        cnt=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cnt++;
                tmp.push_back(nums[i][j]);
                if(cnt%c==0){
                    ans.push_back(tmp);
                    tmp.clear();
                }
            }
        }
        return ans;
    }
};
