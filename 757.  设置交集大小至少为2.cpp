class Solution {
public:
    struct node{
        int u,v;
        friend bool operator<(node a,node b){
            if(a.v==b.v)
            return a.u>b.u;
            return a.v<b.v;
        }
    };
    vector<node> G;
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        int i,p,q,n,u,v,ans;
        n=intervals.size();
        for(i=0;i<n;i++){
            u=intervals[i][0];
            v=intervals[i][1];
            G.push_back((node){u,v});
        }
        sort(G.begin(),G.end());
        p=q=-1,ans=0;
        for(i=0;i<n;i++){
            if(G[i].u<=p)
            continue;
            else if(G[i].u>p&&G[i].u<=q){
                ans++;
                p=q,q=G[i].v;
            }
            else{
                ans+=2;
                p=G[i].v-1,q=G[i].v;
            }
        }
        return ans;
    }
};
