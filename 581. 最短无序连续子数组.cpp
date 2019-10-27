class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int i,u,v;
        vector<int> G;
        G=nums;
        sort(nums.begin(),nums.end());
        u=v=-1;
        for(i=0;i<G.size();i++){
            if(G[i]!=nums[i]){
                u=i;
                break;
            }
        }
        for(i=G.size()-1;i>=0;i--){
            if(G[i]!=nums[i]){
                v=i;
                break;
            }
        }
        if(u==-1)
        return 0;
        return v-u+1;
    }
};
