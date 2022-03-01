class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int start = intervals[0][0],end=intervals[0][1];
        vector<vector<int>>ans;
        for(int i=1;i<intervals.size();i++){
            // cout<<"START = "<<start<<". END = "<<end<<endl;
            if(intervals[i][0]>end){
                vector<int>temp = {start,end};
                ans.push_back(temp);
                start = intervals[i][0];
                end = intervals[i][1];
            }else{
                end = max(end,intervals[i][1]);
            }
        }
        // cout<<start<<" "<<end;
        vector<int>temp = {start,end};
                ans.push_back(temp);
        return ans;
    }
};