//Solution for Leetcode problem 56
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>mergedIntervals;
        int n=intervals.size(); 
        if(n==0) return mergedIntervals;
        sort(intervals.begin(),intervals.end());
        vector<int>tempIntervals = intervals[0];
        for(auto it:intervals)
        {
            if(it[0]<=tempIntervals[1])
            {
                tempIntervals[1] = max(it[1],tempIntervals[1]);
            }else{
                mergedIntervals.push_back(tempIntervals);
                tempIntervals = it;
            }
        }
        //Insert the last tempInterval
        mergedIntervals.push_back(tempIntervals);
        
        return mergedIntervals;
    }
};