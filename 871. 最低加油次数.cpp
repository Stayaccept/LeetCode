class Solution {
public:
    priority_queue<int> qu;
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int i,n,u,v,ans;
        n=stations.size();
        if((n==0&&startFuel<target)||(n!=0&&startFuel<stations[0][0]))
        return -1;
        ans=0;
        for(i=0;i<n;i++){
            u=stations[i][0];
            v=stations[i][1];
            if(startFuel<u){
                while(qu.size()){
                    ans++;
                    startFuel+=qu.top();
                    qu.pop();
                    if(startFuel>=u)
                    break;
                }
                if(startFuel<u)
                return -1;
            }
            // cout<<i<<" "<<startFuel<<" "<<ans<<endl;
            qu.push(v);
        }
        if(startFuel<target){
            while(qu.size()){
                ans++;
                startFuel+=qu.top();
                qu.pop();
                if(startFuel>=target)
                break;
            }
        }
        if(startFuel>=target)
        return ans;
        return -1;
    }
};
