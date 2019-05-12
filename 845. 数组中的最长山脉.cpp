class Solution {
public:
    int l[10005],r[10005];
    int longestMountain(vector<int>& A) {
        int i,n,u,ans;
        n=A.size();
        for(i=1;i<n;i++){
            if(A[i]>A[i-1])
            l[i]=l[i-1]+1;
        }
        for(i=n-2;i>=0;i--){
            if(A[i]>A[i+1])
            r[i]=r[i+1]+1;
        }
        ans=0;
        for(i=1;i<=n-2;i++){
            u=l[i]+r[i]+1;
            if(u>=3&&l[i]!=0&&r[i]!=0)
            ans=max(ans,u);
        }
        return ans;
    }
};
