class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            int maxe = -1;
            int maxi = -1;
            for(int i = 0;i<m;i++){
                if(mat[i][mid] > maxe ){
                    maxe = mat[i][mid];
                    maxi = i;
                }
            }
            if(n==1){
                    return {maxi,mid};
                }
            if(mid==0){
                if(mat[maxi][mid]>mat[maxi][mid+1]) return {maxi,mid};
            }
            else if(mid==n-1){
                if(mat[maxi][mid]>mat[maxi][mid-1]) return {maxi,mid};
            }
            else{
                if((mat[maxi][mid]>mat[maxi][mid+1])&&(mat[maxi][mid]>mat[maxi][mid-1])) return {maxi,mid};
                else if(mat[maxi][mid]<mat[maxi][mid+1])low = mid+1;
                else high = mid-1;
            }
        }
        return {-1,-1};
        
    }
};