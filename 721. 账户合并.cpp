class Solution {
public:
    int fa[10005];
    int get(int x){
        while(x!=fa[x])
        x=fa[x];
        return x;
    }
    void unite(int x,int y){
        x=get(x);
        y=get(y);
        if(x==y)
        return;
        fa[x]=y;
    }
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int i,j,k,n,m,u,tmp;
        set<string> se;
        set<string>::iterator ite;
        map<string,int> mp;
        map<int,vector<int>> mpp;
        map<int,vector<int>>::iterator ite_mpp;
        vector<int> t;
        vector<string> tt;
        vector<vector<string>> ans;
        mp.clear();
        n=accounts.size();
        for(i=1;i<=10000;i++)
        fa[i]=i;
        for(i=0;i<n;i++){
            m=accounts[i].size();
            for(j=1;j<m;j++){
                u=mp[accounts[i][j]];    
                if(u!=0&&u!=i+1)
                unite(u,i+1);
                mp[accounts[i][j]]=i+1;
            }
        }
        for(i=1;i<=n;i++)
        mpp[get(i)].push_back(i-1);
        for(ite_mpp=mpp.begin();ite_mpp!=mpp.end();ite_mpp++){
            se.clear();
            t=ite_mpp->second;
            for(i=0;i<t.size();i++){
                for(j=0;j<accounts[t[i]].size();j++)
                se.insert(accounts[t[i]][j]);
            }
            tt.clear();
            for(ite=se.begin();ite!=se.end();ite++)
            tt.push_back(*ite);
            ans.push_back(tt);
        }
        return ans;
    }
};
