class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums3.size();i++){
            for(int j=0;j<nums4.size();j++){
                mp[(nums3[i]+nums4[j])]++;
            }
        }
        for(auto it:mp) cout<<it.first<<" ";
        for(int i=0;i<nums3.size();i++){
            for(int j=0;j<nums4.size();j++){
                int temp = nums1[i]+nums2[j];
                if(mp.find(-temp)!=mp.end())
                    ans+=mp[-temp];
            }
        }
        return ans;
    }
};