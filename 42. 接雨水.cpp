class Solution {
public:
    int trap(vector<int>& height) {
        int i,j,u,v,n,ans;
        n=height.size();
        if(n==0||n==1)
        return 0;
        u=height[0],v=height[n-1];
        i=0,j=n-1;
        ans=0;
        while(i<=j){
            if(u<v){
                ans+=(u-height[i++]);
                if(i<n)
                u=max(u,height[i]);
            }
            else{
                ans+=(v-height[j--]);
                if(j>=0)
                v=max(v,height[j]);
            }
        }
        return ans;
    }
};
