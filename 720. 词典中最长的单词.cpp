class Solution {
public:
    string longestWord(vector<string>& words) {
        int i,j,u,v;
        string ans;
        map<string,int> mp;
        u=0,ans="";
        for(i=0;i<words.size();i++)
        mp[words[i]]=1;
        for(i=0;i<words.size();i++){
            v=words[i].size();
            for(j=1;j<=v-1;j++){
                if(mp[words[i].substr(0,j)]==0)
                goto next;
            }
            if(words[i].size()>u){
                u=words[i].size();
                ans=words[i];
            }
            else if(words[i].size()==u)
            ans=min(ans,words[i]);
            next:;
        }
        return ans;
    }
};
