class Solution {
public:
    bool search(vector<int>& nums, int target) {
//         int index=-1,sz=nums.size();
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]<nums[i-1]) {
//                 index=i;break;
//             }
//         }
//         if(index==-1) index=0;
//         cout<<"Index= "<<index;
//         if(target==nums[index]) return true;
//         else if(target<nums[index]) return binary_search(nums.begin(),nums.begin()+index-1,target);
        
//         else return binary_search(nums.begin()+index,nums.end()-1,target);
        
        if(nums.size()==1 && target==nums[0]) return true;
        int low=0,high=nums.size()-1;
        
        while(low<=high){
            if(nums[low]==target) return true;
            else if(nums[high]==target) return true;
            low++;
            high--;
        }
        return false;
    }
};