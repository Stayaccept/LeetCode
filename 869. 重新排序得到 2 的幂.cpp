class Solution {
public:
    int cal(int N){
        int i,sum;
        vector<int> G;
        G.clear();
        while(N){
            G.push_back(N%10);
            N/=10;
        }
        sort(G.begin(),G.end(),greater<int>());
        sum=0;
        for(i=0;i<G.size();i++)
        sum=sum*10+G[i];
        return sum;
    }
    bool reorderedPowerOf2(int N) {
        int i;
        map<int,int> mp;
        mp.clear();
        for(i=1;i<=1e9;i*=2)
        mp[cal(i)]=1;
        return mp[cal(N)];
    }
};
