class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0,mx=INT_MIN,ans;
        int low=0,high=0;
        while(high<k){
            sum+=nums[high];
            high++;
        }
        mx=max(mx,sum);
        
        while(high<nums.size())
        {
            sum-=nums[low];
            low++;
            sum+=nums[high];
            high++;
            mx=max(mx,sum);
        }
        ans = (mx/k);
        return ans;
    }
};