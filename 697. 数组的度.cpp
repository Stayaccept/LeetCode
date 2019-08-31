class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int i,n,u,v,ans;
        int vis[50000];
        vector<int> id[50000];
        u=0,n=nums.size();
        memset(vis,0,sizeof(vis));
        for(i=0;i<n;i++){
            vis[nums[i]]++;
            id[nums[i]].push_back(i);
            u=max(u,vis[nums[i]]);
        }
        ans=n+1;
        for(i=0;i<n;i++){
            if(vis[nums[i]]==u){
                v=id[nums[i]].size();
                ans=min(ans,id[nums[i]][v-1]-id[nums[i]][0]+1);
            }
        }
        return ans;
    }
};
