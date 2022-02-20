class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        // int ans=intervals.size();
        // sort(intervals.begin(),intervals.end());
        // for(int i=0;i<intervals.size()-1;i++){
        //   if(((intervals[i][0]>=intervals[i+1][0]) && (intervals[i][1]<=intervals[i+1][1])))
        //   {
        //       auto it = intervals.begin()+i;
        //       intervals.erase(it);
        //   }
        //     else if(((intervals[i][0]<=intervals[i+1][0]) && (intervals[i][1]>=intervals[i+1][1])))
        //     {
        //         auto it = intervals.begin()+i+1;
        //         intervals.erase(it);
        //     }
        // }
        // return intervals.size();
        
        int ans=0,maxLeft=-1,maxRight=-1;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++)
        {
            if((intervals[i][0]>maxLeft) && (intervals[i][1]>maxRight))
            {
                maxLeft=intervals[i][0];
                ans++;
            }
            maxRight = max(intervals[i][1],maxRight);
        }
         // cout<<intervals[1][0];
        return ans;
    }
};