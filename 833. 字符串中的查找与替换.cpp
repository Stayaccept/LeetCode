class Solution {
public:
    string findReplaceString(string S, vector<int>& indexes, vector<string>& sources, vector<string>& targets) {
        int i,j,u;
        string s;
        map<int,int> mp;
        mp.clear();
        for(i=0;i<indexes.size();i++){
            u=sources[i].size();
            if(S.substr(indexes[i],u)==sources[i])
            mp[indexes[i]]=i+1;
        }
        s="";
        for(i=0;i<S.size();){
            if(mp[i]==0){
                s+=S[i];
                i++;
            }
            else{
                s+=targets[mp[i]-1];
                u=sources[mp[i]-1].size();
                i+=u;
            }
            
        }
        return s;
    }
};
