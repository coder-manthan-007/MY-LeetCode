class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0;
        int high = m-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(target>=matrix[mid][0] && target<=matrix[mid][n-1]){
                int l2 = 0;
                int h2 = n-1;
                while(l2<=h2){
                    int m2 = (l2+h2)/2;
                    if(matrix[mid][m2]==target)return 1;
                    else if(matrix[mid][m2]<target)l2=m2+1;
                    else h2 = m2-1;
                }
                return 0;

            }
            else if(target>matrix[mid][0])low = mid+1;
            else high = mid-1;
        }
        return 0;

        
    }
};