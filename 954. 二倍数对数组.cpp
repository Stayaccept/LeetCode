class Solution {
public:
    bool canReorderDoubled(vector<int>& A) {
        int i,j,u,sig;
        map<int,int> mp;
        mp.clear();
        for(i=0;i<A.size();i++)
        mp[A[i]]++;
        sort(A.begin(),A.end());
        for(i=0;i<A.size();i++){
            u=A[i];
            if(u==0){
                if(mp[0]%2!=0)
                return 0;
                mp[0]=0;
                continue;
            }
            while(mp[u]!=0){
                sig=0;
                if(u%2!=0){
                    if(mp[u*2]!=0){
                        mp[u]--;
                        mp[u*2]--;
                        sig=1;
                    }
                }
                else{
                    if(mp[u*2]!=0&&mp[u/2]!=0){
                        mp[u]--;
                        if(mp[u*2]<mp[u/2])
                        mp[u*2]--;
                        else
                        mp[u/2]--;
                        sig=1;
                    }
                    else if(mp[u*2]==0&&mp[u/2]!=0){
                        mp[u]--;
                        mp[u/2]--;
                        sig=1;
                    }
                    else if(mp[u*2]!=0&&mp[u/2]==0){
                        mp[u]--;
                        mp[u*2]--;
                        sig=1;
                    }
                }
                if(sig==0)
                return 0;
            }
        }
        return 1;
    }
};
