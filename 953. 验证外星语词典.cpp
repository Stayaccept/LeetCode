class Solution {
public:
    int vis[30];
    int cal(string a,string b){
        int i,n,m;
        n=a.size(),m=b.size();
        for(i=0;i<n&&i<m;i++){
            if(vis[a[i]-'a']<vis[b[i]-'a'])
            return 1;
            else if(vis[a[i]-'a']>vis[b[i]-'a'])
            return 0;
        }
        if(n<m)
        return 1;
        return 0;
        
    }
    bool isAlienSorted(vector<string>& words, string order) {
        int i;
        string a,b;
        memset(vis,0,sizeof(vis));
        for(i=0;i<order.size();i++)
        vis[order[i]-'a']=i;
        for(i=1;i<words.size();i++){
            if(cal(words[i-1],words[i])==0)
            return 0;
        }
        return 1;
    }
};
