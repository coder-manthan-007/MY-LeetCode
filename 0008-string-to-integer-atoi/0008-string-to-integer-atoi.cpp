class Solution {
public:
    int myAtoi(string s) {
        vector<int> ans;
        int n = s.length();
        int flag = 0; // 0: initial state, 1: positive sign, -1: negative sign

        for (int i = 0; i < n; i++) {
            // 1. Skip leading whitespaces when no digits or signs seen yet
            if (s[i] == ' ' && flag == 0) {
                continue;
            }
            // 2. Handle sign characters when no digits or signs seen yet
            else if ((s[i] == '-' || s[i] == '+') && flag == 0) {
                flag = (s[i] == '-') ? -1 : 1;
            }
            // 3. Process digits
            else if (s[i] >= '0' && s[i] <= '9') {
                if (flag == 0) flag = 1; // Default to positive if no explicit sign was read
                ans.push_back(s[i] - '0');
            }
            // 4. Stop reading at the first non-digit character after digits/signs start
            else {
                break; 
            }
        }

        // Convert vector to int with 32-bit overflow checks
        long result = 0;
        int sign = (flag == -1) ? -1 : 1;

        for (int digit : ans) {
            result = result * 10 + digit;

            // Clamp to 32-bit signed integer limits
            if (sign * result >= INT_MAX) return INT_MAX;
            if (sign * result <= INT_MIN) return INT_MIN;
        }

        return sign * result;
    }
};