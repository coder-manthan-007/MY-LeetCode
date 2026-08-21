class Solution {
public:
    string removeStars(string s) {
        int i = 0;
        while (i < (int)s.length() - 1) {
            if(s[i+1]=='*'){
                s.erase(i,2);
                i--;
            }
            else{
                i++;
            }
            
        }
        return s;
        
    }
};