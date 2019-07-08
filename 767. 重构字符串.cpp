class Solution {
public:
    struct node{
        int c,sum;
        friend bool operator<(node a,node b){
            return a.sum<b.sum;
        }
    }a[26];
    priority_queue<node> qu;
    string reorganizeString(string S) {
        node tmp;
        int i,n,u,v;
        string ans;
        n=S.size();
        for(i=0;i<26;i++)
        a[i].sum=0;
        for(i=0;i<n;i++){
            a[S[i]-'a'].sum++;
            a[S[i]-'a'].c=S[i]-'a';
        }
        for(i=0;i<26;i++){
            if(a[i].sum==0)
            continue;
            qu.push(a[i]);
        }
        ans="";
        for(i=0;i<n;i++){
            tmp=qu.top();
            u=tmp.c;
            v=tmp.sum;
            if(i!=0){
                if(u==ans[i-1]-'a'){
                    qu.pop();
                    if(qu.size()==0){
                        ans="";
                        return ans;
                    }
                    u=qu.top().c;
                    v=qu.top().sum;
                    ans+=('a'+u);
                    qu.pop();
                    if(v-1!=0)
                    qu.push((node){u,v-1});
                    qu.push(tmp);
                }
                else{
                    ans+=('a'+u);
                    qu.pop();
                    if(v-1!=0)
                    qu.push((node){u,v-1});
                }
            }
            else{
                ans+=('a'+u);
                qu.pop();
                if(v-1!=0)
                qu.push((node){u,v-1});
            }
        }
        return ans;
    }
};
