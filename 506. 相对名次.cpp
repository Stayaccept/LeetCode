class Solution {
public:
    map<int,string> mp;
    map<int,string>::reverse_iterator ite;
    vector<string> findRelativeRanks(vector<int>& nums) {
        int i,u,v,n,pos;
        string tmp="";
        vector<string> G;
        n=nums.size();
        for(i=0;i<n;i++)
        mp[nums[i]]=tmp;
        pos=0;
        for(ite=mp.rbegin();ite!=mp.rend();ite++){
            u=ite->first;
            pos++;
            if(pos==1)
            mp[u]="Gold Medal";
            else if(pos==2)
            mp[u]="Silver Medal";
            else if(pos==3)
            mp[u]="Bronze Medal";
            else
            mp[u]=to_string(pos);
        }
        for(i=0;i<n;i++)
        G.push_back(mp[nums[i]]);
        return G;
    }
};
