class Solution {
public:
    int L[10005],R[10005];
    vector<int> shortestToChar(string S, char C) {
        int i,n;
        vector<int> G;
        n=S.size();
        L[0]=-1;
        for(i=1;i<=n;i++){
            if(S[i-1]==C)
            L[i]=i;
            else
            L[i]=L[i-1];
        }
        R[n+1]=-1;
        for(i=n;i>=1;i--){
            if(S[i-1]==C)
            R[i]=i;
            else
            R[i]=R[i+1];
        }
        for(i=1;i<=n;i++){
            if(L[i]==-1&&R[i]!=-1)
            G.push_back(R[i]-i);        
            else if(L[i]!=-1&&R[i]==-1)
            G.push_back(i-L[i]);
            else if(L[i]==-1&&R[i]==-1)
            G.push_back(0);
            else
            G.push_back(min(i-L[i],R[i]-i));
        }
        return G;
    }
};
