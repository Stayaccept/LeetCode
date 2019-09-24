/*
 * @lc app=leetcode.cn id=646 lang=cpp
 *
 * [646] 最长数对链
 */
class Solution {
public:
    struct node{
        int u,v;
        friend bool operator<(node a,node b){
            if(a.v==b.v)
            return a.u<b.u;
            return a.v<b.v;
        }
    };
    vector<node> G;
    int findLongestChain(vector<vector<int>>& pairs) {
        int i,n,u,v,ans;
        n=pairs.size();
        for(i=0;i<n;i++){
            u=pairs[i][0];
            v=pairs[i][1];
            G.push_back((node){u,v});
        }
        sort(G.begin(),G.end());
        u=G[0].v,ans=1;
        for(i=1;i<n;i++){
            if(G[i].u<=u)
            continue;
            ans++;
            u=G[i].v;
        }
        return ans;
    }
};

