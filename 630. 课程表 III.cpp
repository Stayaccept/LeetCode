/*
 * @lc app=leetcode.cn id=630 lang=cpp
 *
 * [630] 课程表 III
 */

// @lc code=start
class Solution {
public:
    struct node{
        int u,v;
        friend bool operator<(node a,node b){
            if(a.v==b.v)
            return a.u<b.u;
            return a.v<b.v;
        }
    };
    vector<node> G;
    int scheduleCourse(vector<vector<int>>& courses) {
        int i,op;
        priority_queue<int> qu;
        for(i=0;i<courses.size();i++)
        G.push_back((node){courses[i][0],courses[i][1]});
        sort(G.begin(),G.end());
        op=0;
        for(i=0;i<G.size();i++){
            if(op+G[i].u<=G[i].v){
                op+=G[i].u;
                qu.push(G[i].u);
            }
            else if(qu.size()!=0&&qu.top()>G[i].u){
                op=op+G[i].u-qu.top();
                qu.pop();
                qu.push(G[i].u);
            }
        }
        return qu.size();
    }
};
// @lc code=end

