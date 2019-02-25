class Solution {
public:
    int fa[1005];
    int get(int x){
        if(x!=fa[x])
        x=get(fa[x]);
        return x;
    }
    void unite(int x,int y){
        x=get(x);
        y=get(y);
        if(x==y)
        return;
        fa[x]=y;
    }
    int same(int x,int y){
        return get(x)==get(y);
    }
    bool equationsPossible(vector<string>& equations) {
        int i;
        string tmp;
        for(i=0;i<26;i++)
        fa[i]=i;
        for(i=0;i<equations.size();i++){
            tmp=equations[i];
            if(tmp[1]=='=')
            unite(tmp[0]-'a',tmp[3]-'a');
        }
        for(i=0;i<equations.size();i++){
            tmp=equations[i];
            if(tmp[1]=='!'){
                if(same(tmp[0]-'a',tmp[3]-'a'))
                return 0;
            }
        }
        return 1;
    }
};
