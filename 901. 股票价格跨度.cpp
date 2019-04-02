static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();
class StockSpanner {
public:
    stack<pair<int,int> > sta;
    StockSpanner() {

    }
    int next(int price) {
        int sum;
        pair<int,int> u;
        if(sta.size()==0){
            sta.push(make_pair(price,1));
            return 1;
        }
        sum=1;
        while(sta.size()){
            u=sta.top();
            if(u.first<=price){
                sum+=u.second;
                sta.pop();
            }
            else
            break;
        }
        sta.push(make_pair(price,sum));
        return sum;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
