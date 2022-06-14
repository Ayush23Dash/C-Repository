class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        
        vector<int> left_max(n);
        
        vector<int> right_max(n);
        
        // find the max. tiil ith index from left
        
        left_max[0] = height[0];
        
        for(int i = 1; i < n; i++)
        {
            left_max[i] = max(left_max[i - 1], height[i]);
        }
        
        // find the max. till ith index from right
        
        right_max[n - 1] = height[n - 1];
        
        for(int i = n - 2; i >= 0; i--)
        {
            right_max[i] = max(right_max[i + 1], height[i]);
        }
        
        // find total water stored
        
        int total_water = 0;
        
        for(int i = 1; i <= n - 2; i++)
        {
            int curr_water = min(left_max[i], right_max[i]) - height[i];
            
            total_water += curr_water;
        }
        
        return total_water;
    }
};