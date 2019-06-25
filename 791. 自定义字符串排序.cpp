class Solution {
public:
    int a[30];
    int INF=0x3f3f3f3f;
    string customSortString(string S, string T) {
        int i,j,n;
        memset(a,INF,sizeof(a));
        for(i=0;i<S.size();i++)
        a[S[i]-'a']=i;
        n=T.size();
        for(i=0;i<n;i++){
            for(j=0;j<i;j++)
            if(a[T[i]-'a']<a[T[j]-'a'])
            swap(T[i],T[j]);
        }
        return T;
    }
};
