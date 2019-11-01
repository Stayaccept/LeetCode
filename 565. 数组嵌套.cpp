class Solution {
public:
    int vis[20005];
    int arrayNesting(vector<int>& nums) {
        int i,u,n,tmp,ans;
        n=nums.size();
        memset(vis,0,sizeof(vis));
        ans=0;
        for(i=0;i<n;i++){
            if(vis[i]==1)
            continue;
            tmp=1;
            u=nums[i];
            vis[i]=1;
            while(nums[u]!=nums[i]){
                vis[u]=1;
                u=nums[u];
                tmp++;
            }
            ans=max(ans,tmp);
        }
        return ans;
    }
};
