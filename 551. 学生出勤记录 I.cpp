class Solution {
public:
    bool checkRecord(string s) {
        int i,sig1,sig2;
        sig1=0,sig2=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='A')
            sig1++;
            if(i-2>=0&&s[i]=='L'&&s[i-1]=='L'&&s[i-2]=='L')
            sig2=1;
        }
        if(sig1>1||sig2==1)
        return 0;
        return 1;
    }
};
