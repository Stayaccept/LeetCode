/*
 * @lc app=leetcode.cn id=667 lang=cpp
 *
 * [667] 优美的排列 II
 */
class Solution {
public:
    vector<int> constructArray(int n, int k) {
        int i,l,r,u,v;
        vector<int> ans;
        if(k==1){
            for(i=1;i<=n;i++)
            ans.push_back(i);
            return ans;
        }
        ans.clear();
        ans.push_back(n);
        ans.push_back(1);
        l=2,r=n-1;
        for(i=1;i<=k-2;i++){
            if(i%2!=0){
                ans.push_back(r);
                r--;
            }
            else{
                ans.push_back(l);
                l++;
            }
        }
        n=ans.size();
        u=min(ans[n-1],ans[n-2])+1;
        v=max(ans[n-1],ans[n-2])-1;
        if(ans[n-1]==v+1){
            for(i=v;i>=u;i--)
            ans.push_back(i);
        }
        else{
            for(i=u;i<=v;i++)
            ans.push_back(i);
        }
        return ans;
    }
};

