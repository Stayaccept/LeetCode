class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        int i,n,u,v,l,r,ans,mid;
        if(k==1)
        return 0;
        n=nums.size();
        sort(nums.begin(),nums.end());
        l=0,r=1000000;
        while(l<=r){
            mid=(l+r)>>1;
            u=v=0;
            for(i=0;i<n;i++){
                while(u<n){
                    if(nums[u]-nums[i]>=mid){
                        if(u==i)
                        u++;
                        break;
                    }
                    u++;
                }
                v+=(u-i);
            }
            v-=n;
            if(v<=k-1){
                ans=mid;
                l=mid+1;
            }
            else
            r=mid-1;
        }
        return ans;
    }
};
