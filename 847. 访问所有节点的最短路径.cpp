class Solution {
public:
    struct node{
        int s,sta,sum;
        friend bool operator<(node a,node b){
            return a.sum>b.sum;
        }
    };
    vector<int> G[15];
    priority_queue<node> qu;
    map<pair<int,int>,int> mp;
    int shortestPathLength(vector<vector<int>>& graph) {
        node tmp;
        int i,j,n,u,v,op,ans;
        n=graph.size();
        for(i=0;i<n;i++){
            for(j=0;j<graph[i].size();j++)
            G[i].push_back(graph[i][j]);
        }
        
        mp.clear();
        for(i=0;i<n;i++){
            qu.push((node){i,1<<i,0});
            mp[make_pair(i,1<<i)]=1;
        }
        ans=0;
        while(qu.size()){
            tmp=qu.top();
            qu.pop();
            if(tmp.sta==((1<<n)-1)){
                ans=tmp.sum;
                break;
            }
            u=tmp.s;
            for(i=0;i<G[u].size();i++){
                v=G[u][i];
                op=tmp.sta|(1<<v);
                if(mp[make_pair(op,v)]==1)
                continue;
                mp[make_pair(op,v)]=1;
                qu.push((node){v,op,tmp.sum+1});
            }
        }
        return ans;
    }
};
