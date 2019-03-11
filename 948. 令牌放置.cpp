class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        int i,j,ans,tmp;
        sort(tokens.begin(),tokens.end());
        i=ans=tmp=0,j=tokens.size()-1;
        while(i<=j){
            if(P>=tokens[i]){
                tmp++;
                P-=tokens[i];
                i++;
                ans=max(ans,tmp);
            }
            else if(tmp>0){
                tmp--;
                P+=tokens[j];
                j--;
            }
            else
            break;
        }
        return ans;
    }
};
