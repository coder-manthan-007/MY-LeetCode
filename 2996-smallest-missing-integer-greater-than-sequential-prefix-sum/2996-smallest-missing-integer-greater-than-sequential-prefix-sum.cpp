class Solution {
public:
    int missingInteger(vector<int>& nums) {
        vector<int>hash(1300);
        for(int i = 0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int j = 1;

        int sum = nums[0];
        while(j<nums.size()){
            if(nums[j] == nums[j-1]+1){
                sum+=nums[j];
            }
            
            else{
                break;
            }
            j++;
        }
        int maxi = sum;
        if(hash[sum]==0){
            return sum;
        }
        else{
            for(int i=sum;i<51;i++){
            if(hash[i]!=0){
                maxi = i+1;
            }
            else{
                return maxi;
            }
        }

        }
        
        return maxi;
    }
};