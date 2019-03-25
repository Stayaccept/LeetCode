class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int i,ans_mx,ans_mi,sum,tmp_mx,tmp_mi;
        sum=tmp_mx=tmp_mi=0;
        ans_mx=ans_mi=A[0];
        for(i=0;i<A.size();i++){
            sum+=A[i];
            if(tmp_mx<0)
            tmp_mx=0;
            if(tmp_mi>0)
            tmp_mi=0;
            tmp_mx+=A[i];
            tmp_mi+=A[i];
            ans_mx=max(ans_mx,tmp_mx);
            ans_mi=min(ans_mi,tmp_mi);
        }
        if(sum==ans_mi)
        return ans_mx;
        return max(ans_mx,sum-ans_mi);
    }
};
