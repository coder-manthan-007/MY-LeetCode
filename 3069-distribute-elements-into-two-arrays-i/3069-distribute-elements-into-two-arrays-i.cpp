class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>ans,arr1,arr2;
        int i = 2,j=0,k=0;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
    while(i<nums.size()){
        if(arr1[j]>arr2[k]){
            arr1.push_back(nums[i]);
            j++;
        }
        else{
            arr2.push_back(nums[i]);
            k++;
        }
        i++;
    }
    for(int i = 0;i<arr1.size();i++){
        ans.push_back(arr1[i]);
    }
    for(int i = 0;i<arr2.size();i++){
        ans.push_back(arr2[i]);
    }
    return ans;

        
    }
};