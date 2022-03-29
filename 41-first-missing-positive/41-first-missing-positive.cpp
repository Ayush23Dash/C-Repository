class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
//         int highestNumber=INT_MIN,ans;
//         for(int n:nums){
//             highestNumber=max(highestNumber,n);
//         }
//         int positiveNumSum=0;
//         for(int n:nums){
//             if(n<=0) continue;
//             else positiveNumSum+=n;
//         }
//         int sumUptoHighestNum = (highestNumber*(highestNumber+1))/2;
//         int difference = sumUptoHighestNum - positiveNumSum;
//         if(difference == 0) ans = highestNumber+1;
//         else {
        

//         vector<int>posNumArray;
//         for(int n:nums) {
//             if(n>0) posNumArray.push_back(n);
//         }
//         if(posNumArray.empty()) return 1;
//         bool flag=false;
//         for(int n:posNumArray){
//             if(n==1) {
//                 flag=true;
//                 break;
//             }
//         }
//         if(flag)
//         {
//             ans=difference;
//         }
//         else{
//             return 1;
//         }
//         }
//         return ans;
        sort(nums.begin(),nums.end());
        int positiveIndex = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                positiveIndex = i;
                break;
            }
        }
        // cout<<positiveIndex;
        if(positiveIndex==-1 || nums[positiveIndex]!=1)  return 1;
        int ans=-1;
        for(int i=positiveIndex;i<nums.size()-1;i++){
            if(nums[i]+1 == nums[i+1] || nums[i]==nums[i+1]) continue;
            else{
                ans = nums[i]+1;
                break;
            }
        }
        if(ans == -1) return nums[nums.size()-1] + 1;
        return ans;
    }
};