class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int i,n,l,r,mid,ans;
        n=A.size();
        l=0,r=n-2;
        while(l<=r){
            mid=(l+r)/2;
            if(A[mid]>A[mid+1]){
                ans=mid;
                r=mid-1;
            }
            else
            l=mid+1;
        }
        return ans;
    }
};
