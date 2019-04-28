class Solution {
public:
    int binaryGap(int N) {
        int u,id,ans;
        u=-1,id=ans=0;
        while(N){
            if(N&1){
                if(u==-1)
                u=id;
                else{
                    ans=max(ans,id-u);
                    u=id;
                }
            }
            N>>=1;
            id++;
        }
        return ans;
    }
};
