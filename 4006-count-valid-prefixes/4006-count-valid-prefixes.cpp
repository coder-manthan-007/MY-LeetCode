class Solution {
public:
    int countValidPrefixes(string s) {
        int cnt1 = 0;
        int cnt0 = 0;
        int cnt = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i]=='0')cnt0++;
            else cnt1++;
            if(abs(cnt1-cnt0)<2)cnt++;
         }
    return cnt;
        
    }
};