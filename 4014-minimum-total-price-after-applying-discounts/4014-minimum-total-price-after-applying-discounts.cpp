class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double sum = 0;
        int n = prices.size();
        int m = discounts.size();
        sort(prices.begin(),prices.end(),greater<>());
        sort(discounts.begin(),discounts.end(),greater<>());
        double i = 0,j = 0;
        for(int i = 0;i<n;i++){
            sum += prices[i];
            if(j<m){
                sum -= (double)prices[i]*discounts[j]/100;
                j++;
            }
        }
        return sum;
        
        
    }
};