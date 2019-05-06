class Solution {
public:
    struct node{
        int pos;
        double t;
        friend bool operator<(node a,node b){
            return a.pos>b.pos;
        }
    };
    vector<node> G;
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int i,n,ans;
        double u;
        n=position.size();
        if(n==0||n==1)
        return n;
        for(i=0;i<n;i++)
        G.push_back((node){position[i],(target-position[i])*1.0/speed[i]});
        sort(G.begin(),G.end());
        ans=1,u=G[0].t;
        for(i=1;i<n;i++){
            if(G[i].t>u){
                ans++;
                u=G[i].t;
            }
        }
        return ans;
    }
};
