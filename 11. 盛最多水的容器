class Solution {
public:
    int maxArea(vector<int>& height) {
        int i,j,len,ans;
        ans=0,len=height.size();
        i=0,j=len-1;
        while(i<j){
            ans=max(ans,(j-i)*min(height[i],height[j]));
            if(height[i]<height[j])
            i++;
            else
            j--;
        }
        return ans;
    }
};
