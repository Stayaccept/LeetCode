class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int i,j,n;
        n=A.size();
        if(n<3||A[0]>=A[1])
        return 0;
        for(i=1;i<n;i++){
            if(A[i]==A[i-1])
            return 0;
            else if(A[i]<A[i-1])
            break;
        }
        if(i==n)
        return 0;
        for(j=i+1;j<n;j++)
        if(A[j]>=A[j-1])
        return 0;
        return 1;
    }
};
