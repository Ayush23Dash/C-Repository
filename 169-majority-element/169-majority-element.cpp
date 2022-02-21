class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int ans = nums[0],count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==ans) count++;
            else count--;
            if(count==0) {
                ans = nums[i];
                count=1;
            }
        }
        return ans;
    }
};