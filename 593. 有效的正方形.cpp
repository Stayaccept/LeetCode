class Solution {
public:
    int cal(int x1,int y1,int x2,int y2){
        return (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int i;
        vector<int> G;
        set<int> s1,s2;
        G.push_back(cal(p1[0],p1[1],p2[0],p2[1]));
        G.push_back(cal(p1[0],p1[1],p3[0],p3[1]));
        G.push_back(cal(p1[0],p1[1],p4[0],p4[1]));
        G.push_back(cal(p2[0],p2[1],p3[0],p3[1]));
        G.push_back(cal(p2[0],p2[1],p4[0],p4[1]));
        G.push_back(cal(p3[0],p3[1],p4[0],p4[1]));
        sort(G.begin(),G.end());
        for(i=0;i<4;i++)
        s1.insert(G[i]);
        for(i=4;i<6;i++)
        s2.insert(G[i]);
        if(G[0]!=0&&s1.size()==1&&s2.size()==1&&G[4]==2*G[0])
        return 1;
        return 0;
    }
};
