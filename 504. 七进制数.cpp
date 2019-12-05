class Solution {
public:
    string convertToBase7(int num) {
        string ans,tmp;
        ans=tmp="";
        if(num==0)
        return "0";
        if(num<0){
            tmp="-";
            num=-num;
        }
        while(num){
            ans=to_string(num%7)+ans;
            num/=7;
        }
        return tmp+ans;
    }
};
