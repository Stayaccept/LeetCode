/*
 * @lc app=leetcode.cn id=659 lang=cpp
 *
 * [659] 分割数组为连续子序列
 */
class Solution {
public:
    map<int,int> mp,pre;
    map<int,int>::iterator ite;
    bool isPossible(vector<int>& nums) {
        int i,n,u,v;
        n=nums.size();
        mp.clear();
        pre.clear();
        for(i=0;i<n;i++)
        mp[nums[i]]++;
        for(i=0;i<n;i++){
            u=nums[i];
            v=mp[u];
            if(v==0)
            continue;
            mp[u]--;
            if(pre[u-1]!=0){
                pre[u-1]--;
                pre[u]++;
            }
            else if(mp[u+1]!=0&&mp[u+2]!=0){
                mp[u+1]--;
                mp[u+2]--;
                pre[u+2]++;
            }
            else
            return 0;
        }
        return 1;
    }
};

