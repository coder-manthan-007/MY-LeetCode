class Solution {
public:
    string removeOuterParentheses(string s) {
        int i = 0;
        int j = 0;
        int x = 0,y= 0;
        vector<int>erase;

        do{
            if(s[j]=='(')x++;
            else y++;
            if(x==y){
                erase.push_back(i);
                erase.push_back(j);
                if(j!=s.length()-1){
                    i=j+1;
                }                
                
            }
            j++;
        }
        while(j!=s.length());
        for(int i = erase.size()-1;i>=0;i--){
            s.erase(erase[i],1);
        }
        return s;
        
    }
};