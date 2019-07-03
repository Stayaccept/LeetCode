class Solution {
public:
    map<int,int> mp;
    map<int,int>::iterator ite;
    int numRabbits(vector<int>& answers) {
        int i,u,v,w,ans;
        for(i=0;i<answers.size();i++)
        mp[answers[i]]++;
        ans=0;
        for(ite=mp.begin();ite!=mp.end();ite++){
            u=ite->first;
            v=ite->second;
            w=v%(u+1);
            ans+=v;
            if(w!=0)
            ans+=(u+1-w);
        }
        return ans;
    }
};
