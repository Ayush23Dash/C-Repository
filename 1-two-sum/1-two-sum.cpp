class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])==mp.end()){
                mp[nums[i]]=i;
            }else{
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
                mp[nums[i]]=i;
                return ans;
            }
        }
        return ans;
    }
};