class Solution {
public:
    struct node{
        int x,l,r;
        friend bool operator<(node a,node b){
        return a.x<b.x;
        }
    };
    vector<node> G;
    int judge(node u,node v){
        if(u.l==v.l||u.l==v.r||u.r==v.l||u.r==v.r)
        return 1;
        return 0;
    }
    vector<vector<int> > fourSum(vector<int>& nums, int target){
        int i,j,n,u,ll,rr,pp,qq;
        set<vector<int> > st;
        set<vector<int> >::iterator ite;
        vector<int> tmp;
        vector<vector<int> > ans;
        G.clear();
        n=nums.size();
        for(i=1;i<=n;i++){
            for(j=i+1;j<=n;j++)
            G.push_back((node){nums[i-1]+nums[j-1],i,j});
        }
        sort(G.begin(),G.end());
        ll=0,rr=G.size()-1;
        st.clear();
        while(ll<rr){
            u=G[ll].x+G[rr].x;
            if(G[ll].x==9&&G[rr].x==12)
            cout<<G[ll].l<<" "<<G[ll].r<<" "<<G[rr].l<<" "<<G[rr].r<<endl;
            if(u==target){
                if(judge(G[ll],G[rr])!=1){
                    tmp.clear();
                    tmp.push_back(nums[G[ll].l-1]);
                    tmp.push_back(nums[G[ll].r-1]);
                    tmp.push_back(nums[G[rr].l-1]);
                    tmp.push_back(nums[G[rr].r-1]);
                    sort(tmp.begin(),tmp.end());
                    st.insert(tmp);
                }
                pp=ll+1,qq=rr-1;
                while(pp<rr&&G[pp].x==G[ll].x){
                    if(judge(G[pp],G[rr])!=1){
                        tmp.clear();
                        tmp.push_back(nums[G[pp].l-1]);
                        tmp.push_back(nums[G[pp].r-1]);
                        tmp.push_back(nums[G[rr].l-1]);
                        tmp.push_back(nums[G[rr].r-1]);
                        sort(tmp.begin(),tmp.end());
                        st.insert(tmp);
                    }
                    pp++;
                }
                while(ll<qq&&G[qq].x==G[rr].x){
                    if(judge(G[qq],G[ll])!=1){
                        tmp.clear();
                        tmp.push_back(nums[G[qq].l-1]);
                        tmp.push_back(nums[G[qq].r-1]);
                        tmp.push_back(nums[G[ll].l-1]);
                        tmp.push_back(nums[G[ll].r-1]);
                        sort(tmp.begin(),tmp.end());
                        st.insert(tmp); 
                    }
                    qq--;
                }
                ll++,rr--;
            }
            else if(u<target)
            ll++;
            else
            rr--;
        }
        ans.clear();
        for(ite=st.begin();ite!=st.end();ite++)
        ans.push_back(*ite);
        return ans;
    }
};
