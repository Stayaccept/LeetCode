class Solution {
public:
    int fa[205];
    int get(int x){
        if(x==fa[x])
        return x;
        return fa[x]=get(fa[x]);
    }
    void unite(int x,int y){
        x=get(x);
        y=get(y);
        fa[x]=y;
    }
    int findCircleNum(vector<vector<int>>& M) {
        int i,j,n,ans;
        n=M.size();
        for(i=0;i<n;i++)
        fa[i]=i;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(M[i][j]==1)
                unite(i,j);
            }
        }
        ans=0;
        for(i=0;i<n;i++)
        if(fa[i]==i)
        ans++;
        return ans;
    }
};
