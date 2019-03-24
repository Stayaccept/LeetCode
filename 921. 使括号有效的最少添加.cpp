class Solution {
public:
    int minAddToMakeValid(string S) {
        int i;
        char u;
        stack<char> sta;
        for(i=0;i<S.size();i++){
            if(sta.size()!=0){
                u=sta.top();
                if(u=='('&&S[i]==')'){
                    sta.pop();
                    continue;
                }
            }
            sta.push(S[i]);
        }
        return sta.size();
    }
};
