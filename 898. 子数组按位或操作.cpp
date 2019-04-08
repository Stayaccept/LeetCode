static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();
class Solution {
public:
    int subarrayBitwiseORs(vector<int>& A) {
        int i;
        unordered_set<int> u,v,ans;
        unordered_set<int>::iterator ite;
        for(i=0;i<A.size();i++){
            v.clear();
            v.insert(A[i]);
            for(ite=u.begin();ite!=u.end();ite++)
            v.insert((*ite)|A[i]);
            u=v;
            for(ite=u.begin();ite!=u.end();ite++)
            ans.insert(*ite);
        }
        return ans.size();
    }
};
