class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int totalXor = 0;
        bool hasNonZero = false;

        for (int x : nums) {
            totalXor ^= x;
            if (x != 0) {
                hasNonZero = true;
            }
        }

        // If every element is 0, no non-zero XOR sum is possible
        if (!hasNonZero) {
            return 0;
        }

        // If total XOR is already non-zero, use the entire array
        if (totalXor != 0) {
            return nums.size();
        }

        // Otherwise, removing any non-zero element yields a valid subsequence
        return nums.size() - 1;
    }
};