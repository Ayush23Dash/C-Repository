class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i] *= nums[i];
        }
        // sort(nums.begin(),nums.end());
        int low =0 ,high=nums.size()-1;
        while(low<high){
            if(nums[low]<=nums[high]){
                high--;
            }
            else if(nums[low]>nums[high]){
                int val = nums[low];
                // vector<int>::iterator it;
                // it = nums.begin()+low;
                nums.erase(nums.begin());
                nums.insert(nums.begin()+high,val);
            }
        }
        return nums;
    }
};