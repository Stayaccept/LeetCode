class Solution {
public:
    int xx[4]={0,1,0,-1};
    int yy[4]={1,0,-1,0};
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int i,j,x,y,u,v,op,ans;
        map<pair<int,int>,int> mp;
        mp.clear();
        for(i=0;i<obstacles.size();i++){
            u=obstacles[i][0];
            v=obstacles[i][1];
            mp[make_pair(u,v)]=1;
        }
        x=y=op=ans=0;
        for(i=0;i<commands.size();i++){
            u=commands[i];
            if(u>0){
                for(j=1;j<=u;j++){
                    x+=xx[op];
                    y+=yy[op];
                    if(mp[make_pair(x,y)]!=0){
                        x-=xx[op];
                        y-=yy[op];
                        ans=max(ans,x*x+y*y);
                        break;
                    }
                    ans=max(ans,x*x+y*y);
                }
            }
            else{
                if(u==-1)
                op=(op+1)%4;
                else
                op=(op-1+4)%4;
            }
        }
        return ans;
    }
};
