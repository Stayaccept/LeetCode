class Solution {
public:
    int a[30005];
    int partitionDisjoint(vector<int>& A) {
        int i,n,tmp;
        n=A.size()-1;
        a[n]=A[n];
        for(i=n-1;i>=0;i--)
        a[i]=min(A[i],a[i+1]);
        a[n+1]=0x3f3f3f3f;
        tmp=A[0];
        for(i=0;i<=n;i++){
            if(a[i+1]>=tmp)
            return i+1;
            tmp=max(tmp,A[i]);
        }
        return 1;
    }
};
