class Solution {
public:
    int smallestRangeII(vector<int>& A, int K) {
        int i,n,mi,mx,ans;
        n=A.size();
        sort(A.begin(),A.end());
        ans=A[n-1]-A[0];
        for(i=1;i<n;i++){
            mi=min(A[0]+K,A[i]-K);
            mx=max(A[i-1]+K,A[n-1]-K);
            ans=min(ans,mx-mi);
        }
        return ans;
    }
};
