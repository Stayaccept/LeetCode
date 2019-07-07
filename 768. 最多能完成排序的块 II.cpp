class Solution {
public:
    int a[2005];
    int INF=0x3f3f3f3f;
    int maxChunksToSorted(vector<int>& arr) {
        int i,u,n,ans;
        n=arr.size();
        a[n]=INF;
        for(i=n-1;i>=0;i--)
        a[i]=min(arr[i],a[i+1]);
        u=-1,ans=0;
        for(i=0;i<n;i++){
            if(max(u,arr[i])<=a[i+1]){
                u=-1;
                ans++;
            }
            else
            u=max(u,arr[i]);
        }
        return ans;
    }
};
