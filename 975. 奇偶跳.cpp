class Solution {
public:
    int oddEvenJumps(vector<int>& A) {
        int i,n;
        int nex_1[20005],nex_2[20005],dp[20005][2];
        map<int,int> mp;
        map<int,int>::iterator ite;
        mp.clear();
        memset(nex_1,0,sizeof(nex_1));
        memset(nex_2,0,sizeof(nex_2));
        n=A.size()-1;
        if(n==0)
        return 1;
        for(i=n;i>=0;i--){
            ite=mp.lower_bound(A[i]);
            if(ite!=mp.end())
            nex_1[i]=ite->second; 
            if(ite==mp.end()){
                if(mp.size()!=0){
                    ite--;
                    nex_2[i]=ite->second;
                }
            }
            else{
                if(ite->first==A[i])
                nex_2[i]=ite->second;
                else{
                    if(ite!=mp.begin()){
                        ite--;
                        nex_2[i]=ite->second;
                    }
                }
            }
            mp[A[i]]=i;
        }
        memset(dp,0,sizeof(dp));
        for(i=0;i<=n;i++)
        dp[i][0]=1;
        for(i=0;i<=n;i++){
            if(nex_1[i]!=0)
            dp[nex_1[i]][1]+=dp[i][0];
            if(nex_2[i]!=0)
            dp[nex_2[i]][0]+=dp[i][1];
        }
        return dp[n][0]+dp[n][1];
    }
};
