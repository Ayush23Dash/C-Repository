class Solution {
    struct hashFunction
{
  size_t operator()(const pair<int , 
                    int> &x) const
  {
    return x.first ^ x.second;
  }
};
public:
    int findPairs(vector<int>& nums, int k) {
        int sz = nums.size();
        // if(sz==0) return 1;
        // int ans=0;
        // unordered_set<pair<int,int>,hashFunction>st;
        // for(int i=0;i<sz-1;i++){
        //     for(int j=i+1;j<sz;j++){
        //         if(abs(nums[i]-nums[j]) == k){
        //             if(nums[i]>nums[j])
        //             st.insert(make_pair(nums[i],nums[j]));
        //             else 
        //                 st.insert(make_pair(nums[j],nums[i]));
        //         } 
        //     }
        // }
        // return st.size();
        
        if(sz==0) return 1;
        unordered_map<int,int>mp;
        for(int n : nums) mp[n]++;
        int ans=0;
        for(auto it:mp){
            int num = (it.first);
            if(k>0){
               if( mp.find(num+k)!=mp.end()) ans++;
            }else if(k==0){
                if(it.second>1) ans++;
            }
        }
        return ans;
            
    }
    
};