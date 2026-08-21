class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt = 0;
        int k = flowerbed.size();
        if(k==1){
            if(flowerbed[0]==0)cnt++;

        }
        else{

        
        if(flowerbed[0]==0 && flowerbed[1]==0){
                flowerbed[0]++;
                cnt++;
            }
        for(int i = 1;i<flowerbed.size()-1;i++){
            if(flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]==0){
                flowerbed[i]++;
                cnt++;
            }
        }
        if(flowerbed[k-2]==0 && flowerbed[k-1]==0){
                flowerbed[k-1]++;
                cnt++;
            }
        }
        if(cnt>=n)return 1;
        else return 0;

        
    }
};