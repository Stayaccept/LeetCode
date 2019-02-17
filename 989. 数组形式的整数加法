class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        int i,c=0,tmp;
        reverse(A.begin(),A.end());
        for(i=0;i<A.size();i++){
            tmp=A[i];
            A[i]=(A[i]+K%10+c)%10;
            c=(tmp+K%10+c)/10;
            K/=10;
        }
        while(K!=0){
            A.push_back((K%10+c)%10);
            c=((K%10)+c)/10;
            K/=10;
        }
        if(c!=0)
        A.push_back(c);
        reverse(A.begin(),A.end());
        return A;
    }
};
