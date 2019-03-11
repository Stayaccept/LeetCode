class Solution {
public:
    int fa[1005];
    int get(int x){
        while(x!=fa[x])
        x=fa[x];
        return x;
    }
    void unite(int x,int y){
        x=get(x);
        y=get(y);
        if(x==y)
        return;
        fa[x]=y;
    }
    int removeStones(vector<vector<int>>& stones) {
        int i,j,n;
        set<int> se;
        n=stones.size();
        for(i=1;i<=n;i++)
        fa[i]=i;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if((stones[i][0]==stones[j][0])||(stones[i][1]==stones[j][1]))
                unite(i+1,j+1);
            }
        }
        se.clear();
        for(i=1;i<=n;i++)
        se.insert(get(i));
        return n-se.size();
    }
};
