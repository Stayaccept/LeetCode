class Solution {
public:
    int maxTurbulenceSize(vector<int>& A) {
        int i,tmp1,tmp2,ans;
        ans=tmp1=tmp2=1;
        for(i=0;i+1<A.size();i++){
            if(i%2==0){
                if(A[i]>A[i+1])
                tmp1++;
                else
                tmp1=1;
                if(A[i]<A[i+1])
                tmp2++;
                else
                tmp2=1;
            }
            else{
                if(A[i]<A[i+1])
                tmp1++;
                else
                tmp1=1;
                if(A[i]>A[i+1])
                tmp2++;
                else
                tmp2=1;
            }
            ans=max(ans,max(tmp1,tmp2));
        }
        return ans;
    }
};
