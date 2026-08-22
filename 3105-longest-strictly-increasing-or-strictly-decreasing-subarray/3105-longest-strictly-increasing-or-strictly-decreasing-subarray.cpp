class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int maxi = 1;
        int cnt = 1;
        for(int i = 1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                cnt++;
            }
            else cnt = 1;
            maxi = max(maxi,cnt);
        }
        cnt = 1;
        for(int i = 1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                cnt++;
            }
            else cnt = 1;
            maxi = max(maxi,cnt);
        }
        return maxi;

        
    }
};