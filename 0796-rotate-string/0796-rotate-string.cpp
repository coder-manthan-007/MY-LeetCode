class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        for(int i = 0;i<n;i++){
            if(s==goal)return 1;
            s.push_back(s[0]);
            s.erase(0,1);
        }
        return 0;
        
    }
};