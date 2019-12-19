class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int i,u,n,ans;
        stack<int> sta;
        ans=0;
        n=heights.size();
        sta.push(-1);
        for(i=0;i<n;i++){
            u=sta.top();
            while(u!=-1&&heights[u]>heights[i]){
                sta.pop();
                ans=max(ans,(i-sta.top()-1)*heights[u]);
                u=sta.top();
            }
            sta.push(i);
        }
        u=sta.top();
        while(u!=-1){
            sta.pop();
            ans=max(ans,(n-sta.top()-1)*heights[u]);
            u=sta.top();
        }
        return ans;
    }
};
