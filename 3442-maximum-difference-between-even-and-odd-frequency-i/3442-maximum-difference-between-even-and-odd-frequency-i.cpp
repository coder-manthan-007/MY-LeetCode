class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mpp;
        for(int i = 0;i<s.length();i++){
            mpp[s[i]]++;
        }
        int emin = INT_MAX;
        int omax = -1;
        for(auto it : mpp){
            if(it.second % 2 == 0){
                emin = min(emin,it.second);
            }
            else{
                omax = max(omax,it.second);
            }
        }
        return omax - emin;
        
    }
};