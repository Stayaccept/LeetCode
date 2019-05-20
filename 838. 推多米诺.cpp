class Solution {
public:
    int L[100005],R[100005];
    string pushDominoes(string dominoes) {
        int i,n,u;
        n=dominoes.size();
        u=-1;
        for(i=0;i<n;i++){
            if(dominoes[i]=='.')
            R[i]=u;
            else if(dominoes[i]=='R')
            u=i;
            else 
            u=-1;
        }
        u=-1;
        for(i=n-1;i>=0;i--){
            if(dominoes[i]=='.')
            L[i]=u;
            else if(dominoes[i]=='L')
            u=i;
            else
            u=-1;
        }
        for(i=0;i<n;i++){
            if(dominoes[i]=='.'){
                if(R[i]==-1&&L[i]!=-1)
                dominoes[i]='L';
                else if(R[i]!=-1&&L[i]==-1)
                dominoes[i]='R';
                else if(R[i]!=-1&&L[i]!=-1){
                    if(i-R[i]>L[i]-i)
                    dominoes[i]='L';
                    else if(i-R[i]<L[i]-i)
                    dominoes[i]='R';
                }
            }
        }
        return dominoes;
    }
};
