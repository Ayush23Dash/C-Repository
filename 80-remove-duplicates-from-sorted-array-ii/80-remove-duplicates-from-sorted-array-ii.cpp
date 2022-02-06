class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int low=0,high=0;
        if(nums.size()==1) return 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                high=i;
                int currentLength = high-low+1;
                if(currentLength>2){
                    // cout<<currentLength<<" "<<endl;
                    auto it = nums.begin() + high;
                    // cout<<"Element to be erased = "<<*it<<endl;
                    nums.erase(it);
                    i--;
                    // cout<<"i when erased = "<<i<<endl;
                }
            }
            else{
                // cout<<"IN ELSE"<<endl;
                low=i;
                high=i;
                // cout<<"High = "<<high<<" Low = "<<low<<endl;
            }
        }
        return nums.size();
    }
};