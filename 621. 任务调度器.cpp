#include <bits/stdc++.h>

using namespace std;
/*
 * @lc app=leetcode.cn id=621 lang=cpp
 *
 * [621] 任务调度器
 */

// @lc code=start
class Solution {
public:
    struct node{
        int u,t;
        friend bool operator<(node a,node b){
            return a.u<b.u;
        }
    };
    queue<node> q;
    priority_queue<node> qu;
    int leastInterval(vector<char>& tasks, int n) {
        node tmp;
        int i,ans,num[30];
        if(n==0){
            return tasks.size();
        }
        memset(num,0,sizeof num);
        for(i=0;i<tasks.size();i++)
        num[tasks[i]-'A']++;
        for(i=0;i<26;i++)
        if(num[i]>0)
        qu.push((node){num[i],-1});
        for(i=1;;i++){
            if(q.size()&&q.front().t==i){
                qu.push(q.front());
                q.pop();
            }
            if(qu.size()){
                tmp=qu.top();
                if(tmp.u-1>0)
                q.push((node){tmp.u-1,i+n+1});
                qu.pop();
            }
            if(q.size()==0&&qu.size()==0){
                ans=i;
                break;
            }
        }
        return ans;
    }
};
// @lc code=end

