class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        if(nums.size()==0) return ans;
        int start=0,end;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==(nums[i-1] + 1)) continue;
            else{
                end = i-1;
                if(start == end) 
                {
                    ans.push_back(to_string(nums[start]));
                    start=i;
                }
                else{
                string temp=to_string(nums[start]);
                temp+="->";
                temp+=to_string(nums[end]);
                ans.push_back(temp);
                start=i;
                }
                
            }
            
        }
        end = nums.size()-1;
        if(start == end) 
                {
                    ans.push_back(to_string(nums[start]));
                }
        else
                {
                    string temp=to_string(nums[start]);
                    temp+="->";
                    temp+=to_string(nums[end]);
                    ans.push_back(temp);
                }
        
               
        return ans;
    }
};