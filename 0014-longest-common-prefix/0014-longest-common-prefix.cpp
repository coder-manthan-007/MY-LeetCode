class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string com = strs[0];
        for(int i = 1;i<strs.size();i++){
            for(int j = 0;j<com.length();j++){
                if(com[j]!=strs[i][j]){
                    com = strs[i].substr(0,j);
                }
                if(com == "") return com;
            }
        }
        return com;
    }
};