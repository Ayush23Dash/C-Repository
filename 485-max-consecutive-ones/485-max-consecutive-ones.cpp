class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxLength=0,length=0;;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                maxLength=max(maxLength,length);
                length=0;
            }else if(nums[i]==1){
                length++;
            }
        }
        maxLength=max(maxLength,length);
        return maxLength;
    }
};