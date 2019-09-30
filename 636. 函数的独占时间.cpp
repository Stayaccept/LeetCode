/*
 * @lc app=leetcode.cn id=636 lang=cpp
 *
 * [636] 函数的独占时间
 */

// @lc code=start
class Solution {
public:
    struct node{
        int id,val;
    };
    stack<node> sta;
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        string tmp,p_tmp;
        int i,j,p,q,u,v,pre;
        vector<int> ans;
        for(i=0;i<n;i++)
        ans.push_back(0);
        pre=0;
        p_tmp="end";
        for(i=0;i<logs.size();i++){
            u=v=0,tmp="";
            for(j=0;j<logs[i].size();j++){
                if(logs[i][j]==':')
                break;
                u=u*10+logs[i][j]-'0';
            }
            for(p=j+1;p<logs[i].size();p++){
                if(logs[i][p]==':')
                break;
                tmp+=logs[i][p];
            }
            for(q=p+1;q<logs[i].size();q++)
            v=v*10+logs[i][q]-'0';
            // cout<<u<<" "<<tmp<<" "<<v<<endl;
            if(tmp=="start"){
                if(sta.size()!=0){
                    p=sta.top().id;
                    if(p_tmp!="end")
                    ans[p]+=(v-pre);
                    else
                    ans[p]+=(v-pre-1);
                }
                sta.push((node){u,v});
            }
            else{
                p=sta.top().id;
                q=sta.top().val;
                if(q==pre)
                ans[p]+=(v-pre+1);
                else
                ans[p]+=v-pre;
                sta.pop();
            }
            // cout<<ans[0]<<" "<<ans[1]<<endl;
            pre=v,p_tmp=tmp;
        }
        return ans;
    }
};
// @lc code=end

