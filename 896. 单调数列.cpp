class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int i,n,a,b;
        n=A.size();
        if(n==1)
        return 1;
        a=b=1;
        for(i=1;i<n;i++){
            if(a==1&&A[i]<A[i-1])
            a=0;
            if(b==1&&A[i]>A[i-1])
            b=0;
        }
        return a||b;
    }
};
