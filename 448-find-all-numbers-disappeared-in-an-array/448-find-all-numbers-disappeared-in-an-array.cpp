class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        map<int,int>mp;
        for(int i=1;i<=n;i++){
            mp[i]==0;
        }
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second == 0)
                ans.push_back(it.first);
        }
        return ans;
    }
};