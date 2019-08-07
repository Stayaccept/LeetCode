class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i,u,v,n,ans;
        u=ans=0,v=1;
        n=nums.size();
        for(i=0;i<n;i++){
            v*=nums[i];
            while(u<=i){
                if(v>=k){
                    v/=nums[u];
                    u++;
                }
                else{
                    ans+=(i-u+1);
                    break;
                }
            }
        }
        return ans;
    }
};
