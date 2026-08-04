class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int maxi = -1;
        int mini = 101;
        vector<int>hash(101);
        for(int i = 0;i<n;i++){
            hash[nums[i]]++;
            maxi = max(maxi,nums[i]);
            mini = min(mini,nums[i]);
        }
        vector<int>ans;
        for(int i = mini;i<=maxi;i++){
            if(hash[i]==0)ans.push_back(i);
        }
        return ans;
        
    }
};