class Solution {
public:
    struct node{
        int u,v;
        friend bool operator<(node a,node b){
            return a.u<b.u;
        }
    };
    vector<node> G;
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int i,j,n,m,u,ans;
        priority_queue<int> qu;
        n=difficulty.size();
        m=worker.size();
        for(i=0;i<n;i++)
        G.push_back((node){difficulty[i],profit[i]});
        sort(G.begin(),G.end());
        sort(worker.begin(),worker.end());
        j=ans=0;
        for(i=0;i<m;i++){
            u=worker[i];
            while(j<n){
                if(G[j].u<=u){
                    qu.push(G[j].v);
                    j++;
                }
                else
                break;
            }
            if(qu.size()!=0)
            ans+=qu.top();
        }
        return ans;
    }
};
