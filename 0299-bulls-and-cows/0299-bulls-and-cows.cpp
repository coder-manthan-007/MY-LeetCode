class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int>arr(10);
        for(int i = 0;i<secret.length();i++){
            arr[secret[i]-'0']++;
        }
        int bull = 0,cow = 0;
        for(int i = 0;i<secret.length();i++){
            if(secret[i]==guess[i]){
                bull++;
                arr[guess[i]-'0']--;
                }
            
            
        }
        for(int i = 0;i<secret.length();i++){
            if(secret[i]!=guess[i]){
                 if(arr[guess[i]-'0']!=0){
                cow++;
                arr[guess[i]-'0']--;                
            }

            }

        }
        string ans;
        ans+=to_string(bull);
        ans+="A";
        ans+=to_string(cow);
        ans+="B";
        return ans;
        
    }
};