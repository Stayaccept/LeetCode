class RecentCounter {
public:
    vector<int> s;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int x,y;
        s.push_back(t);
        x=lower_bound(s.begin(),s.end(),t-3000)-s.begin();
        y=lower_bound(s.begin(),s.end(),t)-s.begin();
        return y-x+1;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
