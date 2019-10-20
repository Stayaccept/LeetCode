class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i,m;
        m=flowerbed.size();
        for(i=0;i<m;i++){
            if(n==0)
            break;
            if(flowerbed[i]==1)
            continue;
            if(i-1<0&&i+1>=m){
                flowerbed[i]=1;
                n--;
            }
            else if(i-1>=0&&i+1>=m){
                if(flowerbed[i-1]==0){
                    flowerbed[i]=1;
                    n--;
                }
            }
            else if(i-1<0&&i+1<m){
                if(flowerbed[i+1]==0){
                    flowerbed[i]=1;
                    n--;
                }
            }
            else{
                if(flowerbed[i-1]==0&&flowerbed[i+1]==0){
                    flowerbed[i]=1;
                    n--;
                }
            }
        }
        return n==0;
    }
};
