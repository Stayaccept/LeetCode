class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        int i,j;
        int vis[1000005];
        memset(vis,0,sizeof(vis));
        vector<int> ans;
        for(i=1;i<=bound;i*=x){
            for(j=1;j+i<=bound;j*=y){
                if(vis[i+j]==1)
                continue;
                vis[i+j]=1;
                ans.push_back(i+j);
                if(y==1)
                break;
            }
            if(x==1)
            break;
        }
        return ans;
    }
};
