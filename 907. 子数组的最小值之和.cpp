class Solution {
public:
    int sumSubarrayMins(vector<int>& A) {
        int i,u,v,n;
        long long ans,MOD=1e9+7;
        stack<int> sta;
        ans=0;
        n=A.size();
        for(i=0;i<n;i++){
            while(sta.size()!=0){
                u=sta.top();
                if(A[i]<A[u]){
                    sta.pop();
                    v=-1;
                    if(sta.size()!=0)
                    v=sta.top();
                    ans=(ans+A[u]*(u-v)*(i-u))%MOD;
                }
                else
                break;
            }
            sta.push(i);
        }
        while(sta.size()!=0){
            u=sta.top();
            sta.pop();
            v=-1;
            if(sta.size()!=0)
            v=sta.top();
            ans=(ans+A[u]*(u-v)*(n-u))%MOD;
        }
        return ans;
    }
};
