class Solution {
public:
    map<string,int> mp1,mp2;
    map<string,int>::iterator ite;
    void dfs(string s,int pos,string t){
        if(pos>=s.size()){
            if(mp2[t]==0){
                mp1[t]++;
                mp2[t]=1;
            }
            return;
        }
        dfs(s,pos+1,t+s[pos]);
        dfs(s,pos+1,t);
    }
    int findLUSlength(vector<string>& strs) {
        string t;
        int i,u,ans;
        mp1.clear();
        for(i=0;i<strs.size();i++){
            t="";
            mp2.clear();
            dfs(strs[i],0,t);
        }
        ans=-1;
        for(ite=mp1.begin();ite!=mp1.end();ite++){
            t=ite->first;
            u=ite->second;
            if(u==1)
            ans=max(ans,(int)t.size());
        }
        return ans;
    }
};
