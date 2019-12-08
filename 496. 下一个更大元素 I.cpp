class Solution {
public:
    map<int,int> mp;
    stack<int> sta;
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int i,n;
        vector<int> G;
        n=nums2.size();
        for(i=n-1;i>=0;i--){
            while(sta.size()!=0&&nums2[i]>sta.top())
            sta.pop();
            if(sta.size()==0)
            mp[nums2[i]]=-1;
            else
            mp[nums2[i]]=sta.top();
            sta.push(nums2[i]);
        }
        G.clear();
        for(i=0;i<nums1.size();i++)
        G.push_back(mp[nums1[i]]);
        return G;
    }
};
