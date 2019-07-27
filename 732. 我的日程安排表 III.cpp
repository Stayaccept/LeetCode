class MyCalendarThree {
public:
    map<int,int> mp;
    map<int,int>::iterator ite;
    MyCalendarThree() {
        mp.clear();
    }
    int book(int S, int T) {
        int ans,sum;
        ans=sum=0;
        mp[S]++,mp[T]--;
        for(ite=mp.begin();ite!=mp.end();ite++){
            sum+=(ite->second);
            ans=max(ans,sum);
        }
        return ans;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */
