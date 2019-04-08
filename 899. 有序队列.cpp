class Solution {
public:
    string orderlyQueue(string S, int K) {
        char c;
        int i,n;
        set<string> se;
        n=S.size();
        if(K==1){
            for(i=0;i<n;i++){
                c=S[0];
                S.erase(0,1);
                S+=c;
                se.insert(S);
            }
            return *se.begin();
        }
        else{
            sort(S.begin(),S.end());
            return S;
        }
    }
};
