class Solution {
public:
    int romanToInt(string s) {
        map<string,int> mp;
        mp.clear();
        mp["IV"]=4,mp["IX"]=9;
        mp["XL"]=40,mp["XC"]=90;
        mp["CD"]=400,mp["CM"]=900;
        mp["I"]=1,mp["V"]=5;
        mp["X"]=10,mp["L"]=50;
        mp["C"]=100,mp["D"]=500;
        mp["M"]=1000;
        int i,ans=0;
        string tmp;
        for(i=0;i<s.size();i++){
            if(i+1<s.size()){
                tmp="";
                tmp=tmp+s[i]+s[i+1];
                if(mp[tmp]!=0){
                    ans+=mp[tmp];
                    cout<<tmp<<" "<<ans<<endl;
                    i++;
                    continue;
                }
            }
            tmp="";
            tmp+=s[i];
            ans+=mp[tmp];
        }
        return ans;
    }
};
