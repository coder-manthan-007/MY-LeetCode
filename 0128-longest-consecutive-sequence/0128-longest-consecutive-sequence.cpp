class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int>mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int maxi = 0;
        int cnt = 0;
        int prev = -1;
        bool first = true;
        for(auto const& [key, val] : mpp){
            if (first){
                cnt = 1;
                first = false;
            }
            else if(key == prev+1){
                cnt++;
            }
            else{
                cnt = 1;
            }
            maxi = max(maxi, cnt);
            prev = key;

        }
        return maxi;
        
    }
};