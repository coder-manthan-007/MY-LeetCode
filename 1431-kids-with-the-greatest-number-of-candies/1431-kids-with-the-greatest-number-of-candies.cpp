class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = -1;
        int n = candies.size();
        for(int i = 0;i<n;i++){
            maxi = max(candies[i],maxi);
        }
        vector<bool>ans(n);
        for(int i = 0;i<n;i++){
            if(candies[i]+extraCandies >= maxi){
                ans[i] = 1;
            }
            else{
                ans[i] = 0;
            }
        }
        return ans;
        
    }
};