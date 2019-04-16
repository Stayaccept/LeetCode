class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        int i;
        string tmp;
        vector<string> ans;
        map<string,int> mp;
        map<string,int>::iterator ite;
        mp.clear();
        A+=' ',B+=' ',tmp="";
        for(i=0;i<A.size();i++){
            if(A[i]==' '){
                mp[tmp]++;
                tmp="";
            }
            else
            tmp+=A[i];
        } 
        tmp="";
        for(i=0;i<B.size();i++){
            if(B[i]==' '){
                mp[tmp]++;
                tmp="";
            }
            else
            tmp+=B[i];
        } 
        for(ite=mp.begin();ite!=mp.end();ite++)
        if(ite->second==1)
        ans.push_back(ite->first);
        return ans;
    }
};
