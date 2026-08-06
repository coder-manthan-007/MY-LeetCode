class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> nums2 = nums;
        vector<int>ans(n);
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mpp;
        int cnt = 0;
        mpp[nums[0]]=0;
        for(int i = 1;i<n;i++){
            if(nums[i-1]!=nums[i])cnt=i;
            mpp[nums[i]]=cnt;
        }
        for(int i = 0;i<n;i++){
            ans[i] = mpp[nums2[i]];
        }
        return ans;
        
        
    }
};