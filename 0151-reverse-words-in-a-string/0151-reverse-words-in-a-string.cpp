class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int j = n-1;
        string ans;
        char prev = ' ';
        for(int i = n-1;i>=0;i--){
            if((s[i]==' ')&& prev!=' '){
                ans+=s.substr(i+1,j-i);
                j = i-1;
                ans+=' ';
            }
            else if((i==0)&&s[i]!=' '){
                ans+=s.substr(i,j-i+1);
                j = i;
            }
            else if(s[i]==' '&& prev==' ')j--;

             prev = s[i];
        }
        n = ans.length();
        int i = n-1;
        while(ans[i]==' '){
            ans.pop_back();
        }
        return ans;
        
    }
};