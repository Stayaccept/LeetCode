class Solution {
public:
    bool buddyStrings(string A, string B) {
        int i,j,n,m;
        vector<int> ans;
        set<char> se;
        n=A.size();
        m=B.size();
        if(n!=m)
        return 0;
        ans.clear();
        for(i=0;i<n;i++){
            se.insert(A[i]);
            if(A[i]!=B[i])
            ans.push_back(i);
        }
        if(ans.size()==1||ans.size()>2)
        return 0;
        if(ans.size()==0){
            if(se.size()<n)
            return 1;
            return 0;
        }
        swap(A[ans[0]],A[ans[1]]);
        if(A==B)
        return 1;
        return 0;
    }
};
