class Solution {
public:
    vector<int> G;
    int ans,vis[20];
    int dfs(int id,int op,int k,int sum){
        int i;
        if(k==0)
        return 1;
        if(op>sum)
        return 0;
        if(op==sum)
        return dfs(0,0,k-1,sum);    
        for(i=id;i<G.size();i++){
            if(vis[i]==1)
            continue;
            if(op+G[i]>sum)
            break;
            vis[i]=1;
            if(dfs(i+1,op+G[i],k,sum))
            return 1;
            vis[i]=0;
        }
        return 0;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int i,u=0;
        for(i=0;i<nums.size();i++)
        u+=nums[i];
        if(u%k!=0)
        return 0;
        ans=0,G=nums;
        sort(G.begin(),G.end());
        memset(vis,0,sizeof(vis));
        return dfs(0,0,k,u/k);
    }
};
