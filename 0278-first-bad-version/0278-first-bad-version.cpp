// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long low = 0;
        long long high = n-1;
        while(low<=high){
           long long mid = (low+high)/2;
            if(isBadVersion(mid)==0){
                low = mid+1;
            }
            else high = mid-1;
        }
        return low;
        
    }
};