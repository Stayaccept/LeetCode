class Solution {
public:
    int scoreOfParentheses(string S) {
        int i,n,op,ans;
        op=ans=0;
        for(i=0;i<S.size();i++){
            if(S[i]=='(')
            op++;
            else
            op--;
            if(S[i]==')'&&S[i-1]=='(')
            ans+=(1<<op);
        }
        return ans;
    }
};
