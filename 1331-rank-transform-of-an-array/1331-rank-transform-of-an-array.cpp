class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> hash(arr.begin(),arr.end());
        int n = arr.size();
        int rank = 1;
        unordered_map<int,int>mpp;
        for (int num : hash) {
            mpp[num] = rank;
            rank++;
        }
        vector<int>ans(n);
        for(int i = 0;i<n;i++){
            ans[i] = mpp[arr[i]];
        }
        return ans;
        
    }
};