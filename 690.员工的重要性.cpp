/*
 * @lc app=leetcode.cn id=690 lang=cpp
 *
 * [690] 员工的重要性
 */
/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int ans,w[2005];
    vector<int> t,G[2005];
    void dfs(int x){
        int i;
        ans+=w[x];
        for(i=0;i<G[x].size();i++)
        dfs(G[x][i]);
    }
    int getImportance(vector<Employee*> employees, int id) {
        int i,j,n,u;
        Employee* tmp;
        n=employees.size();
        for(i=0;i<n;i++){
            tmp=employees[i];
            u=tmp->id;
            w[u]=tmp->importance;
            t=tmp->subordinates;
            for(j=0;j<t.size();j++)
            G[u].push_back(t[j]);
        }
        ans=0;
        dfs(id);
        return ans;
    }
};

