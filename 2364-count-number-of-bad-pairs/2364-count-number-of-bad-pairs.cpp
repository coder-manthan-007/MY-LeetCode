class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size(); // Use long long to avoid integer overflow
        unordered_map<long long, long long> mpp;

        for (int i = 0; i < n; i++) {
            mpp[nums[i] - i]++;
        }

        long long fact = 0;
        for (auto it : mpp) {
            long long count = it.second; // 'it.second' gives the frequency/value, 'it.first' gives the key
            if (count > 1) {
                fact += count * (count - 1) / 2; // Fixed combination formula: k*(k-1)/2
            }
        }

        return n * (n - 1) / 2 - fact;
    }
};