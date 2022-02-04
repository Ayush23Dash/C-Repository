class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans=0,sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            // int length=0;
            sum+=nums[i]?1:-1;
            if(sum==0){
                if(ans<i+1)
                    ans=i+1;
            }
           else if(mp.find(sum)==mp.end()){
               mp[sum]=i;
           }
            else{
                if(ans < i-mp[sum])
                ans=i-mp[sum];
                
            }
        }
        return ans;
    }
};