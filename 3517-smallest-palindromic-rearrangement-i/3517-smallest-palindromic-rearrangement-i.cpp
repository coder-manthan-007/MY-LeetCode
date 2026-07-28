class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        
        // Take the first half and sort it
        string half = s.substr(0, n / 2);
        sort(half.begin(), half.end());
        
        // Create the reversed second half
        string rev_half = half;
        reverse(rev_half.begin(), rev_half.end());
        
        // If length is odd, keep the middle character in place
        if (n % 2 != 0) {
            return half + s[n / 2] + rev_half;
        }
        
        return half + rev_half;
    }
};