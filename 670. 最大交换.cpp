/*
 * @lc app=leetcode.cn id=670 lang=cpp
 *
 * [670] 最大交换
 */
class Solution {
public:
    vector<int> G;
    int maximumSwap(int num) {
        int i,j,u,v,n,ans;
        while(num){
            G.push_back(num%10);
            num/=10;
        }
        n=G.size();
        for(i=n-1;i>=0;i--){
            u=G[i];
            for(j=0;j<=i-1;j++){
                if(G[j]>u)
                u=G[j],v=j;
            }
            if(u!=G[i]){
                swap(G[i],G[v]);
                break;
            }
        }
        ans=0;
        for(i=n-1;i>=0;i--)
        ans=ans*10+G[i];
        return ans;
    }
};

