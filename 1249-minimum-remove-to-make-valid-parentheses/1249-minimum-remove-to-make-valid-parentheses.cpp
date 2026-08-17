class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int cno = 0;
        int i = 0;

        // Pass 1: Remove invalid ')' from left to right
        while (i < s.length()) {
            if (s[i] == '(') {
                cno++;
            } else if (s[i] == ')') {
                cno--;
            }

            if (cno < 0) {
                s.erase(i, 1);
                cno++;
            } else {
                i++;
            }
        }

        // Pass 2: Remove excess '(' from right to left
        i = s.length() - 1;
        while (cno > 0 && i >= 0) {
            if (s[i] == '(') {
                s.erase(i, 1);
                cno--;
            }
            i--;
        }

        return s;
    }
};