class Solution {
public:
    struct node{
        int op;
        string s;
        friend bool operator<(node a,node b){
            return a.op>b.op;
        }
    };
    map<string,int> mp;
    priority_queue<node> qu;
    int openLock(vector<string>& deadends, string T) {
        int i,j,v;
        string t,tt,S="0000";
        for(i=0;i<deadends.size();i++)
        mp[deadends[i]]=-1;
        if(mp[S]==-1)
        return -1;
        qu.push((node){0,S});
        mp[S]=0;
        while(qu.size()){
            t=qu.top().s;
            v=qu.top().op;
            qu.pop();
            if(t==T)
            return v;
            for(i=0;i<4;i++){
                for(j=-1;j<=1;j+=2){
                    tt=t;
                    tt[i]=(t[i]-'0'+j+10)%10+'0';
                    if(mp[tt]==-1)
                    continue;
                    else{
                        if(mp[tt]!=0&&mp[tt]<=v+1)
                        continue;
                        mp[tt]=v+1;
                        qu.push((node){v+1,tt});
                    }
                }
            }
        }
        return -1;
    }
};
