class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        string ans="";
        int i,j1,j2,u=0;
        for(i=0;i<d.size();i++){
            j1=j2=0;
            while(j1<s.size()&&j2<d[i].size()){
                if(s[j1]==d[i][j2])
                j1++,j2++;
                else
                j1++;
            }
            if(j2==d[i].size()){
                if(j2>u){
                    u=j2;
                    ans=d[i];
                }
                else if(j2==u){
                    if(d[i]<ans)
                    ans=d[i];
                }
            }
        }
        return ans;
    }
};
