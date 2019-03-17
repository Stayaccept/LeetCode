#include <map>
#include <set>
#include <queue>
#include <string>
#include <math.h>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> movesToStamp(string stamp, string target) {
        int i,j,k,n,m,op,sig,num;
        n=stamp.size();
        m=target.size();
        vector<int> ans;
        ans.clear();
        for(num=0;num<10*m;num++){
            for(i=0;i+n-1<m;i++){
                sig=0;
                for(j=0,k=i;j<n;j++,k++)
                if(stamp[j]!=target[k]&&target[k]!='?'){
                    sig=1;
                    break;
                }
                if(sig==0){
                    op=0;
                    for(j=0;j<n;j++)
                    if(target[i+j]!='?'){
                        op=1;
                        break;
                    }
                    if(op==0)
                    continue;
                }
                else
                continue;
                for(j=0;j<n;j++)
                target[i+j]='?';
                ans.push_back(i);
                break;
            }
            if(i+n-1==m){
                ans.clear();
                return ans;
            }
            sig=0;
            for(i=0;i<m;i++)
            if(target[i]!='?'){
                sig=1;
                break;
            }
            if(sig==0)
            break;
        }
        reverse(ans.begin(),ans.end());
        for(i=0;i<m;i++)
        if(target[i]!='?'){
            ans.clear();
            return ans;
        }
        return ans;
    }
};

