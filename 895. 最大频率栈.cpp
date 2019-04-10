class FreqStack{
public:
    struct node{
        int x,num,id;
        friend bool operator<(node a,node b){
            if(a.num==b.num)
            return a.id<b.id;
            return a.num<b.num;
        }
    };
    int tmp;
    node u;
    map<int,int> mp;
    priority_queue<node> qu;
    FreqStack(){
        tmp=0;
        mp.clear();
        while(qu.size())
        qu.pop();
    }
    void push(int x){
        mp[x]++;
        qu.push((node){x,mp[x],tmp++});
    }
    int pop(){
        u=qu.top();
        qu.pop();
        mp[u.x]--;
        return u.x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */
