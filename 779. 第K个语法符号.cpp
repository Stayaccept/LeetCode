class Solution {
public:
    int kthGrammar(int N, int K) {
        int i,u;
        u=0;
        for(i=1;i<=N-1;i++){
            if(K%2==0)
            u++;
            K=(K+1)/2;
        }
        return u%2;
    }
};
