class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        if(nums.size()==1) return 0;
        unordered_map<int,int>mp;
        int ans=0;
        for(int n:nums) mp[n]++;
        
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            if(k>0)
            if(mp.find(num+k)!=mp.end()) ans+=mp[num+k];
            else if(k==0){
                if(mp.find(num)!=mp.end()){
                    if(mp[num]>1) ans+=(mp[num]-1);
                }
            }
        }
        return ans;
    }
};