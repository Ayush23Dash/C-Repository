class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0,sz=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val) sz++;
            if(nums[i]!=val)
            {
                nums[count]=nums[i];
                count++;
                
            }
        }
        int k = nums.size() - sz;
        return k;
    }
};