class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi = 0;
        int n = nums.size()-1;
        for(int i = 0;i<n;i++){
            maxi = max(maxi,nums[i+1]-nums[i]);
        }
        return maxi;
    }
};