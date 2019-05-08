class ExamRoom {
public:
    int n;
    set<int> se;
    set<int>::iterator ite;
    ExamRoom(int N) {
        n=N;
        se.clear();
    }
    int seat() {
        int u,v,pre; 
        if(se.size()==0){
            se.insert(0);
            return 0;
        }
        if(se.size()==1){
            u=*se.begin();
            if(u>=n-1-u)
            v=0;
            else
            v=n-1;
            se.insert(v);
            return v;
        }
        u=*se.begin(),v=0,pre=-1;
        for(ite=se.begin();ite!=se.end();ite++){
            if(pre!=-1){
                if((*ite-pre)/2>u){
                    u=(*ite-pre)/2;
                    v=pre+u;
                }
            }
            pre=*ite;
        }
        if(n-1-*se.rbegin()>u)
        v=n-1;
        se.insert(v);
        return v;
    }
    void leave(int p) {
        se.erase(p);
    }
};
