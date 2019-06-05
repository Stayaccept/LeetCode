class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs){
        int i,n,ans;
        int vis[2005];
        int INF=0x3f3f3f3f;
        memset(vis,0,sizeof(vis));
        n=fronts.size();
        for(i=0;i<n;i++){
            if(fronts[i]==backs[i])
            vis[fronts[i]]=1;
        }
        ans=INF;
        for(i=0;i<n;i++){
            if(backs[i]==fronts[i])
            continue;
            if(vis[backs[i]]!=1)
            ans=min(ans,backs[i]);
            if(vis[fronts[i]]!=1)
            ans=min(ans,fronts[i]);
        }
        if(ans==INF)
        ans=0;
        return ans;
    }
};
