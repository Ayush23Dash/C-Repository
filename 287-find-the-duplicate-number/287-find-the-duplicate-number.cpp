class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        while(true){
            int temp=nums[0];
            if(temp!=nums[temp]) swap(nums[0],nums[temp]);
            else return temp;
        }
        return -1;
    }
};