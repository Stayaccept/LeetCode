class Solution {
public:
    stack<int> sta;
    vector<int> nextGreaterElements(vector<int>& nums) {
        int i,n;
        vector<int> G;
        n=nums.size();
        G.clear();
        for(i=n-1;i>=0;i--){
            while(sta.size()!=0&&nums[i]>=sta.top())
            sta.pop();
            sta.push(nums[i]);
        }
        for(i=n-1;i>=0;i--){
            while(sta.size()!=0&&nums[i]>=sta.top())
            sta.pop();
            if(sta.size()==0)
            G.push_back(-1);
            else
            G.push_back(sta.top());
            sta.push(nums[i]);
        }
        reverse(G.begin(),G.end());
        return G;
    }
};
