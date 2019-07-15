class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int i,n,p,q,u,v;
        n=nums.size();
        if(n==1)
        return 0;
        p=q=-1;
        for(i=0;i<n;i++){
            if(nums[i]>p)
            q=p,p=nums[i],u=i;
            else if(nums[i]>q)
            q=nums[i],v=i;
        }
        if(q==0||p/q>=2)
        return u;
        return -1;
    }
};
