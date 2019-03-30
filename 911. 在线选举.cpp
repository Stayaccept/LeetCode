class TopVotedCandidate {
public:
    map<int,int> mp;
    vector<int> tmp,ans;
    TopVotedCandidate(vector<int> persons, vector<int> times) {
        int i,n,id,op;
        n=persons.size();
        mp.clear();
        ans.clear();
        tmp.clear();
        op=0;
        for(i=0;i<n;i++){
            tmp.push_back(times[i]);
            mp[persons[i]]++;
            if(mp[persons[i]]>=op)
            id=persons[i],op=mp[persons[i]];
            ans.push_back(id);
        }
    }
    int q(int t) {
        int u;
        u=lower_bound(tmp.begin(),tmp.end(),t)-tmp.begin();
        if(tmp[u]==t)
        return ans[u];
        else
        return ans[u-1];
    }
};

/**
 * Your TopVotedCandidate object will be instantiated and called as such:
 * TopVotedCandidate obj = new TopVotedCandidate(persons, times);
 * int param_1 = obj.q(t);
 */
