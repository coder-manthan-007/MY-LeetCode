class Solution {
public:
    int minimumPushes(string word) {
        vector<int>hash(26);
        for(int i = 0;i<word.length();i++){
            hash[word[i]-'a']++;
        }
        int cnt = 0;
        sort(hash.begin(),hash.end(),greater<>());
        for(int i = 0;i<26;i++){
            if(i<8){
                cnt+=hash[i];
            }
            else if(i<16){
                cnt+=hash[i]*2;
            }
            else if(i<24){
                cnt+=hash[i]*3;
            }
            else{
                cnt+=hash[i]*4;
            }
        }
        return cnt;
        
    }
};