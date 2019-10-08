/*
 * @lc app=leetcode.cn id=632 lang=cpp
 *
 * [632] 最小区间
 */

// @lc code=start
class Solution {
public:
    int p[3505];
    struct node{
        int u,id;
        friend bool operator<(node a,node b){
            return a.u>b.u;
        }
    };
    priority_queue<node> qu;
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<int> ans;
        int i,u,v,le,re,tmp,tmp_l,tmp_r;
        re=-100005;
        for(i=0;i<nums.size();i++){
            p[i]=1;
            qu.push((node){nums[i][0],i});
            re=max(re,nums[i][0]);
        }
        le=qu.top().u;
        tmp_l=le,tmp_r=re,tmp=re-le;
        while(1){
            u=qu.top().u;
            v=qu.top().id;
            qu.pop();
            if(p[v]>=nums[v].size())
            break;
            qu.push((node){nums[v][p[v]],v});
            le=qu.top().u;
            re=max(re,nums[v][p[v]]);
            p[v]++;
            if(re-le<tmp){
                tmp=re-le;
                tmp_l=le,tmp_r=re;
            }
        }
        ans.push_back(tmp_l);
        ans.push_back(tmp_r);
        return ans;
    }
};
// @lc code=end

