class Solution {
public:
    int INF=0x3f3f3f3f;
    int judge(int mid,int H,vector<int> G){
        int i,u,ans=0;
        for(i=0;i<G.size();i++){
            u=G[i]%mid;
            ans+=G[i]/mid;
            if(u!=0)
            ans++;
        }
        if(ans>H)
        return 0;
        return 1;
    }
    int minEatingSpeed(vector<int>& piles, int H) {
        int i,L,R,mid,ans;
        L=1,R=INF;
        while(L<=R){
            mid=(L+R)/2;
            if(judge(mid,H,piles)){
                ans=mid;
                R=mid-1;
            }
            else
            L=mid+1;
        }
        return ans;
    }
};
