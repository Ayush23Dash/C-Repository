class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>hashset;
        if(nums.size()==1) return 1;
        int longestStreak=0;
        for(int i=0;i<nums.size();i++){
            hashset.insert(nums[i]);
        }
        
        for(int i=0;i<nums.size();i++){
            int temp = nums[i];
            int currentStreak=0;
            if(!hashset.count(temp-1)){
                currentStreak=1;
                while(hashset.count(temp+1)){
                    temp+=1;
                    currentStreak++;
                }
                longestStreak=max(longestStreak,currentStreak);
            }
        }
        return longestStreak;
    }
};