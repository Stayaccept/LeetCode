class Solution {
public:
    struct node{
        int q;
        double op;
        friend bool operator<(node a,node b){
            return a.op<b.op;
        }
    };
    vector<node> G;
    priority_queue<int> qu;
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int K) {
        int i,n;
        double ans,sum;
        int INF=0x3f3f3f3f;
        n=quality.size();
        G.clear();
        for(i=0;i<n;i++)
        G.push_back((node){quality[i],wage[i]*1.0/quality[i]});
        sort(G.begin(),G.end());
        // for(i=0;i<n;i++)
        // cout<<G[i].q<<" "<<G[i].op<<endl;
        sum=0,ans=INF*1.0;
        for(i=0;i<n;i++){
            sum+=G[i].q;
            qu.push(G[i].q);
            if(qu.size()==K){
                ans=min(ans,G[i].op*sum);
                sum-=qu.top();
                qu.pop();
            }
        }
        return ans;
    }
};
