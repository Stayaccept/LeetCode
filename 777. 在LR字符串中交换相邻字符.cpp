class Solution {
public:
    bool canTransform(string S, string T) {
        int i,j,n,m;
        n=S.size();
        m=T.size();
        if(n!=m)
        return 0;
        i=j=0;
        while(i<n&&j<m){
            while(i<n&&S[i]=='X')
            i++;
            while(j<m&&T[j]=='X')
            j++;
            if(S[i]!=T[j])
            return 0;
            if((S[i]=='L'&&i<j)||(S[i]=='R'&&i>j))
            return 0;
            i++,j++;
        }
        return 1;
    }
};
