class Solution {
public:
    bool isValid(string s) {
        int i;
        char c;
        stack<char> sta;
        map<char,int> mp;
        if(s.size()==0)
        return 1;
        mp['(']=-1,mp[')']=1;
        mp['[']=-2,mp[']']=2;
        mp['{']=-3,mp['}']=3;
        sta.push(s[0]);
        for(i=1;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            sta.push(s[i]);
            else{
                if(sta.size()==0||mp[s[i]]+mp[sta.top()]!=0)
                return 0;
                else
                sta.pop();
            }
        }
        return sta.size()==0;
    }
};
