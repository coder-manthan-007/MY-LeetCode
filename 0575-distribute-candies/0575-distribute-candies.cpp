class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int>mpp;
        for(int i = 0;i<candyType.size();i++){
            mpp[candyType[i]]++;
        }
        return min(mpp.size(),candyType.size()/2);
    }
};