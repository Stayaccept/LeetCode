class MyCalendarTwo {
public:
    map<int,int> mp;
    map<int,int>::iterator ite;
    MyCalendarTwo() {
        mp.clear();
    }
    bool book(int S, int T) {
        int sum=0;
        mp[S]++,mp[T]--;
        for(ite=mp.begin();ite!=mp.end();ite++){
            sum+=(ite->second);
            if(sum>=3){
                mp[S]--,mp[T]++;
                return 0;
            }
        }
        return 1;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */
