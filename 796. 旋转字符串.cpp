class Solution {
public:
    bool rotateString(string A, string B) {
        char c;
        int i,n;
        if(A.size()==0&&B.size()==0)
        return 1;
        n=A.size();
        for(i=0;i<n;i++){
            if(A==B)
            return 1;
            c=A[0];
            A=A.substr(1)+c;
        }
        return 0;
    }
};
