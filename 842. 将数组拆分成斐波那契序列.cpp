class Solution {
public:
    vector<int> tmp,ans;
    long long cal(string S){
        long long i,sum;
        sum=0;
        for(i=0;i<S.size();i++)
        sum=sum*10+S[i]-'0';
        return sum;
    }
    void dfs(string S,int x){
        long long i,u;
        if(tmp.size()>=3){
            for(i=2;i<tmp.size();i++){
                u=(long long)tmp[i-1]+tmp[i-2];
                if(tmp[i]!=u)
                return;
            }
            
        }
        if(x>=S.size()&&tmp.size()>=3){
            ans=tmp;
            return;
        }
        if(S[x]=='0'){
            tmp.push_back(0);
            dfs(S,x+1);
            tmp.pop_back();
        }
        else{
            for(i=x;i<S.size();i++){
                if(i-x+1>=11)
                continue;
                u=cal(S.substr(x,i-x+1));
                tmp.push_back(u);
                dfs(S,i+1);
                tmp.pop_back();
            }
        }
    }
    vector<int> splitIntoFibonacci(string S) {
        tmp.clear();
        ans.clear();
        dfs(S,0);
        return ans;
    }
};
