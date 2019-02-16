class Solution {
public:
    int subarraysWithKDistinct(vector<int>& A, int K){
        int vis_le[205],vis_re[205];
        int i,ans,le,re,siz_le,siz_re;
        le=re=ans=siz_le=siz_re=0;
        memset(vis_le,0,sizeof(vis_le));
        memset(vis_re,0,sizeof(vis_re));
        for(i=0;i<A.size();i++){
            if(vis_le[A[i]]==0)
            siz_le++;
            if(vis_re[A[i]]==0)
            siz_re++;
            vis_le[A[i]]++,vis_re[A[i]]++;
            while(siz_re>=K){
                vis_re[A[re]]--;
                if(vis_re[A[re]]==0)
                siz_re--;
                re++;
            }
            while(siz_le>K){
                vis_le[A[le]]--;
                if(vis_le[A[le]]==0)
                siz_le--;
                le++;
            }
            ans+=(re-le);
        }
        return ans;
    }
};
