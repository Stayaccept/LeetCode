class Solution {
public:
    int f[10],vis[15005];
    vector<int> G,Prime;
    void init(){
        long long i,j,n;
        n=15000;
        memset(vis,0,sizeof(vis));
        for(i=2;i<n;i++){
            for(j=i*i;j<n;j+=i)
            vis[j]=1;
            if(vis[i]==0)
            Prime.push_back(i);
        }
    }
    int cal(int x,int y,int len){
        int u,v;
        u=0,v=x;
        while(x){
            u=u*10+x%10;
            x/=10;
        }
        return v*f[len+1]+y*f[len]+u;
    }
    int judge(int x){
        int i;
        for(i=0;i<Prime.size();i++){
            if(Prime[i]>=x)
            break;
            if(x%Prime[i]==0)
            return 0;
        }
        return 1;
    }
    int primePalindrome(int N) {
        int i,j,k,u,m,tmp;
        f[0]=1;
        init();
        for(i=1;i<=9;i++)
        f[i]=f[i-1]*10;
        G.push_back(2);
        G.push_back(3);
        G.push_back(5);
        G.push_back(7);
        G.push_back(11);
        tmp=0;
        for(i=3;i<=9;i+=2){
            if(f[i]-1<N)
            continue;
            for(j=0;j<=9;j++){
                for(k=f[i/2-1];k<f[i/2];k++){
                    u=cal(k,j,i/2);
                    if(judge(u)){
                        tmp=max(tmp,u);
                        G.push_back(u);
                    }
                }
            }
            if(tmp>=N)
            break;
        }
        sort(G.begin(),G.end());
        return *lower_bound(G.begin(),G.end(),N);
    }
};
