class Solution {
public:
    string decodeAtIndex(string S, int K) {
        int i;
        long long u;
        string tmp;
        u=0;
        for(i=0;i<S.size();i++){
            if(S[i]>='0'&&S[i]<='9')
            u*=(S[i]-'0');
            else
            u++;
        }
        tmp="";
        for(i=S.size()-1;i>=0;i--){
            if(S[i]>='0'&&S[i]<='9'){
                u/=(S[i]-'0');
                K%=u;
            }
            else{
                if(K==0||K==u)
                return tmp+S[i];
                u--;
            }
        }
        return tmp;
    }
};
