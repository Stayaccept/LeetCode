/*
 * @lc app=leetcode.cn id=682 lang=cpp
 *
 * [682] 棒球比赛
 */
class Solution {
public:
    int calPoints(vector<string>& ops) {
        int i,j,u,v,id,ans;
        stack<int> sta;
        ans=0;
        for(i=0;i<ops.size();i++){
            if(ops[i]=="C"){
                ans-=sta.top();
                sta.pop();
            }
            else if(ops[i]=="D"){
                u=sta.top();
                ans+=(u*2);
                sta.push(u*2);
            }
            else if(ops[i]=="+"){
                u=sta.top();
                sta.pop();
                ans+=u;
                v=sta.top();
                ans+=v;
                sta.push(u);
                sta.push(u+v);
            }
            else{
                u=id=0;
                if(ops[i][0]=='-')
                id=1;
                for(j=id;j<ops[i].size();j++)
                u=u*10+ops[i][j]-'0';
                if(id==1)
                u*=-1;
                sta.push(u);
                ans+=u;
            }
        }
        return ans;
    }
};

