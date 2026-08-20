class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>sudo = strs;
        vector<vector<string>>ans;
        
    vector<int>hash(strs.size());
        for(int i = 0;i<strs.size();i++){
            sort(sudo[i].begin(),sudo[i].end());
        }
        for(int i = 0;i<strs.size();i++){
            vector<string>push;
            string s = strs[i];
            sort(s.begin(),s.end());
            int cnt = 0;
            for(int j = 0;j<strs.size();j++){
                if(s==sudo[j]){
                    if(hash[j]==0){
                        push.push_back(strs[j]);
                        hash[j]++;
                        cnt++;
                    }

                }

            }
            if(cnt!=0){
                ans.push_back(push);
            }
            
        }
        return ans;
        
    }
};