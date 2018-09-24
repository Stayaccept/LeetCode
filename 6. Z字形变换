class Solution {
public:
    string convert(string s, int numRows) {
        int i,j,u,v,len;
        string res="";
        len=s.size();
        if(numRows==1)
        return s;
        v=0,res+=s[v];
        for(j=1;;j++){
            v+=2*numRows-2;;
            if(v>=len)
            break;
            res+=s[v];
        }
        for(i=2;i<numRows;i++){
            v=i-1;
            res+=s[v];
            for(j=1;;j++){
                if(j&1)
                u=numRows-i-1;
                else
                u=i-2;
                v+=((u+2)*2-2);
                if(v>=len)
                break;
                res+=s[v];
            }
        }
        v=numRows-1,res+=s[v];
        for(j=1;;j++){
            v+=2*numRows-2;;
            if(v>=len||v==0)
            break;
            res+=s[v];
        }
        return res;
    }
};
