class Solution {
public:
    int fa[2005];
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
    int numSimilarGroups(vector<string>& A) {
        int i,j,k,u,v,n;
        set<int> se;
        set<string> S;
        set<string>::iterator ite;
        vector<int> G;
        n=A.size();
        for(i=0;i<n;i++)
        S.insert(A[i]);
        A.clear();
        for(ite=S.begin();ite!=S.end();ite++)
        A.push_back(*ite);
        n=A.size();
        for(i=0;i<n;i++)
        fa[i]=i;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                u=A[i].size();
                v=A[j].size();
                if(u!=v)
                continue;
                G.clear();
                for(k=0;k<u;k++){
                    if(A[i][k]!=A[j][k])
                    G.push_back(k);
                    if(G.size()>2)
                    break;
                }
                if(G.size()==0)
                unite(i,j);
                else if(G.size()==2){
                    u=G[0],v=G[1];
                    if(A[i][u]==A[j][v]&&A[i][v]==A[j][u])
                    unite(i,j);
                }
            }
        }
        for(i=0;i<n;i++)
        se.insert(get(i));
        return se.size();
    }
};
