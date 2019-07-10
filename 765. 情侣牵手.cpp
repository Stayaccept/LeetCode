class Solution {
public:
    map<int,int> mp;
    int minSwapsCouples(vector<int>& row) {
        int i,n,ans;
        ans=0;
        n=row.size();
        for(i=0;i<n;i++)
        mp[row[i]]=i;
        for(i=0;i<n;i+=2){
            if(row[i]/2==row[i+1]/2)
            continue;
            ans++;
            if(row[i]%2==0){
                mp[row[i+1]]=mp[row[i]+1];
                swap(row[mp[row[i]+1]],row[i+1]);
            }
            else{
                mp[row[i+1]]=mp[row[i]-1];
                swap(row[mp[row[i]-1]],row[i+1]);
            }
            for(int j=0;j<n;j++)
            cout<<row[j]<<" ";
            cout<<endl;
        }
        return ans;
    }
};
