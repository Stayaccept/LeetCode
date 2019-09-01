class Solution {
public:
    struct node{
        int num;
        string s;
        friend bool operator<(node a,node b){
            if(a.num==b.num)
            return a.s<b.s;
            return a.num>b.num;
        }
    };
    vector<node> G;
    map<string,int> mp;
    vector<string> topKFrequent(vector<string>& words, int k) {
        int i,u,v,n;
        vector<string> ans;
        n=words.size();
        mp.clear();
        u=1;
        for(i=0;i<n;i++){
            if(mp[words[i]]==0){
                G.push_back((node){1,words[i]});
                mp[words[i]]=u++;
            }
            else{
                v=mp[words[i]]-1;
                G[v].num++;
            }
        }
        sort(G.begin(),G.end());
        ans.clear();
        for(i=0;i<k;i++)
        ans.push_back(G[i].s);
        return ans;
    }
};
