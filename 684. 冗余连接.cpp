/*
 * @lc app=leetcode.cn id=684 lang=cpp
 *
 * [684] 冗余连接
 */
class Solution {
public:
    int fa[1005];
    int get(int x){
        while(x!=fa[x])
        x=fa[x];
        return x;
    }
    void unite(int x,int y){
        x=get(x),y=get(y);
        if(x==y)
        return;
        fa[x]=y;
    }
    int same(int x,int y){
        return get(x)==get(y);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int i,n,u,v;
        vector<int> ans;    
        n=edges.size();
        for(i=1;i<=n;i++)
        fa[i]=i;
        ans.clear();
        for(i=0;i<n;i++){
            u=edges[i][0];
            v=edges[i][1];
            if(same(u,v)){
                ans.push_back(u);
                ans.push_back(v);
                break;
            }
            else
            unite(u,v);
        }
        return ans;
    }
};

