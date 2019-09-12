/*
 * @lc app=leetcode.cn id=677 lang=cpp
 *
 * [677] 键值映射
 */
class MapSum {
public:
    /** Initialize your data structure here. */
    map<string,int> mp;
    map<string,int>::iterator ite;
    MapSum() {
        mp.clear();
    }

    void insert(string key, int val) {
        mp[key]=val;
    }

    int sum(string prefix) {
        int ans;
        string u;
        ans=0;
        for(ite=mp.begin();ite!=mp.end();ite++){
            u=ite->first;
            if(u.find(prefix)==0)
            ans+=(ite->second);
        }
        return ans;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */

