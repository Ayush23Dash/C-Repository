class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int zero=0;
        for(int i : nums){
            if(i==0) zero++;
        }
        if(zero==nums.size()) {
            int n = nums.size();
            vector<int>temp(n,0);
            return temp;
        }
        int prod=1;
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
            ans.push_back(prod/nums[i]);
            else{
                int temp=1;
                for(int j=0;j<=i-1;j++) temp*=nums[j];
                for(int j=i+1;j<nums.size();j++) temp*=nums[j];
                ans.push_back(temp);
            }
        }
        return ans;
    }
};