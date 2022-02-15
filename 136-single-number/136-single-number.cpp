class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int ans=0;
        for(int n:nums)
        {
            ans^=n;
        }
        return ans;
    }
};