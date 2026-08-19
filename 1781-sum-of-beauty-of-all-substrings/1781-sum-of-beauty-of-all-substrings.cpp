class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        vector<int>asc;
        vector<int>desc;
        
        int cnt = 0;
        for(int i = 0;i<n;i++){
            vector<int>hash(26);
            for(int j = i;j<n;j++){
                hash[s[j]-'a']++;
                asc = hash;
                desc = hash;
                sort(asc.begin(),asc.end());
                sort(desc.begin(),desc.end(),greater<>());
                int k = 0;
                for(int l = 0;l<asc.size();l++){
                    if(asc[l]!=0){
                        k = asc[l];
                        break;
                    }
                }
                if(k!=0){
                    if(desc[0]>k)cnt+=desc[0]-k;
                }

            }
            
        }
        return cnt;
        
        
    }
};