class Solution {
public:
    int myAtoi(string str) {
        int i,id,len,sig;
        long long ans;
        len=str.size();
        for(i=0;i<len;i++){
            if(str[i]!=' ')
            break;
        }
        str=str.substr(i,len-i);
        if(str[0]!='+'&&str[0]!='-'&&(str[0]<'0'||str[0]>'9'))
        return 0;
        id=ans=0,sig=1;
        if(str[0]=='+'){
            id=1;
            sig=1;
        }
        else if(str[0]=='-'){
            id=1;
            sig=-1;
        }
        while(str[id]=='0')
        id++;
        for(i=id;i<len;i++){
            if(str[i]<'0'||str[i]>'9')
            break;
            ans=ans*10+str[i]-'0';
        }
        if(i-id>10){
            if(sig==1)
            return (1<<31)-1;
            return -1*(1<<31);
        }
        ans*=sig;
        if(ans>((1<<31)-1))
        return (1<<31)-1;
        else if(ans<(-1*(1<<31)))
        return -1*(1<<31);
        return ans;
    }
};
