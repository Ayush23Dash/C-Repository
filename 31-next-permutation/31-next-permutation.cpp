class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1) return;
        int sz = nums.size();
        int index1,index2;
        for(int i=sz-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                index1=(i-1);
                break;
            }
            else if(i==1){
                sort(nums.begin(),nums.end());
                return;
            } 
        }
        
        for(int i=sz-1;i>0;i--){
            if(nums[i]>nums[index1]){
                swap(nums[i],nums[index1]);
                break;
            }
        }
        
        index2 = index1+1;
        sort(nums.begin()+index2,nums.end());
        
    }
};