class Solution {
public:
    string change(int x){
        string s="";
        while(x){
            s+=('0'+x%10);
            x/=10;
        }
        reverse(s.begin(),s.end());
        return s;
    }
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        int i,j,k,n,sum;
        string s,tmp;
        vector<string> ans;
        map<string,int> mp;
        map<string,int>::iterator ite;
        n=cpdomains.size();
        mp.clear();
        for(i=0;i<n;i++){
            s=cpdomains[i];
            for(j=0;j<s.size();j++)
            if(s[j]==' ')
            break;
            sum=0;
            for(k=0;k<j;k++)
            sum=sum*10+s[k]-'0';
            s=s.substr(j+1);
            tmp="";
            mp[s]+=sum;
            for(k=0;k<s.size();k++){
                if(s[k]=='.')
                mp[s.substr(k+1)]+=sum;
            }
        }
        for(ite=mp.begin();ite!=mp.end();ite++)
        ans.push_back(change(ite->second)+' '+ite->first);
        return ans;
    }
};
