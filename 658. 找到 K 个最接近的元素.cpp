/*
 * @lc app=leetcode.cn id=658 lang=cpp
 *
 * [658] 找到 K 个最接近的元素
 */
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int i,n,u,v;
        vector<int> ans;
        n=arr.size();
        u=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        if(u<n&&arr[u]==x){
            k--;
            ans.push_back(x);
            v=u-1,u=u+1;
        }
        else
        v=u-1;
        while(1){
            if(k<=0)
            break;
            if(v>=0&&u<n){
                if(abs(arr[v]-x)<=abs(arr[u]-x)){
                    ans.push_back(arr[v]);
                    v--,k--;
                }
                else{
                    ans.push_back(arr[u]);
                    u++,k--;
                }
            }
            else if(v>=0&&u>=n){
                ans.push_back(arr[v]);
                v--,k--;
            }
            else if(u<n&&v<0){
                ans.push_back(arr[u]);
                u++,k--;
            }
            if(k<=0)
            break;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

