#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        // Step 1: Count frequency of each character
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        // Step 2: Transfer to a vector of pairs: {count, character}
        vector<pair<int, char>> vec;
        for (auto& it : freq) {
            vec.push_back({it.second, it.first});
        }

        // Sort in descending order (highest frequency first)
        sort(vec.begin(), vec.end(), greater<pair<int, char>>());

        // Step 3: Build the result string
        string ans = "";
        for (auto& p : vec) {
            int count = p.first;
            char ch = p.second;
            // Append the character 'count' times
            ans.append(count, ch);
        }

        return ans;
    }
};