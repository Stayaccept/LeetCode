class Solution {
public:
    double cal(int x1,int y1,int x2,int y2){
        double tmp;
        tmp=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
        return sqrt(tmp*1.0);
    }
    double minAreaFreeRect(vector<vector<int>>& points) {
        int i,j,k,n,u,v;
        int x_4,y_4,x_12,y_12,x_13,y_13,x_23,y_23;
        double ans,len1,len2,len3;
        map<pair<int,int>,int> mp;
        ans=0;
        n=points.size();
        mp.clear();
        for(i=0;i<n;i++)
        mp[make_pair(points[i][0],points[i][1])]=i;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                for(k=j+1;k<n;k++){
                    x_12=points[j][0]-points[i][0];
                    y_12=points[j][1]-points[i][1];
                    x_13=points[k][0]-points[i][0];
                    y_13=points[k][1]-points[i][1];
                    x_23=points[k][0]-points[j][0];
                    y_23=points[k][1]-points[j][1];
                    if(x_12*x_13+y_12*y_13==0){
                        u=1;
                        x_4=points[j][0]+points[k][0]-points[i][0];
                        y_4=points[j][1]+points[k][1]-points[i][1];
                    }
                    else if(x_12*x_23+y_12*y_23==0){
                        u=2;
                        x_4=points[i][0]+points[k][0]-points[j][0];
                        y_4=points[i][1]+points[k][1]-points[j][1];
                    }
                    else if(x_13*x_23+y_13*y_23==0){
                        u=3;
                        x_4=points[i][0]+points[j][0]-points[k][0];
                        y_4=points[i][1]+points[j][1]-points[k][1];
                    }
                    else
                    continue;
                    if(i==0&&j==1&&k==2){
                        cout<<x_12<<" "<<y_12<<" "<<x_23<<" "<<y_23<<endl;
                        cout<<points[j][0]<<" "<<points[j][1]<<" "<<points[k][0]<<" "<<points[k][1]<<endl;
                    }
                    
                    cout<<i<<" "<<j<<" "<<k<<" "<<u<<" "<<x_4<<" "<<y_4<<endl;
                    cout<<mp[make_pair(0,1)]<<endl;
                    v=mp[make_pair(x_4,y_4)];
                    if(v!=0&&v!=i&&v!=j&&v!=k){
                        len1=cal(points[i][0],points[i][1],points[j][0],points[j][1]);
                        len2=cal(points[i][0],points[i][1],points[k][0],points[k][1]);
                        len3=cal(points[j][0],points[j][1],points[k][0],points[k][1]);
                        if(i==0&&j==1&&k==2)
                        cout<<len1<<" "<<len2<<" "<<len3<<endl;
                        if(ans==0)
                        ans=len1*len2*len3/max(len1,max(len2,len3));
                        else
                        ans=min(ans,len1*len2*len3/max(len1,max(len2,len3)));
                    }
                }
            }
        }
        return ans;
    }
};
