class Solution {
public:
    string strWithout3a3b(int A, int B) {
        int i,len;
        string s="CD";
        while(A||B){
            len=s.size();
            if(s[len-1]!=s[len-2]){
                if(A>B)
                A--,s+="a";
                else
                B--,s+="b";
            }
            else{
                if(s[len-1]=='a')
                B--,s+="b";
                else
                A--,s+="a";
            }
        }
        return s.substr(2);
    }
};
