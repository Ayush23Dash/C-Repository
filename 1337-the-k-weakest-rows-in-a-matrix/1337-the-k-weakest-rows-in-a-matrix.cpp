class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<int,int>mp;
        vector<int>ans;
        vector<pair<int,int>>onesCountWithRows;
        for(int i=0;i<mat.size();i++){
             int oneCount=0;
            for(int j=0;j<mat[i].size();j++){
               if(mat[i][j]==1) oneCount++;
            }
            onesCountWithRows.push_back(make_pair(oneCount,i));
        }
        sort(onesCountWithRows.begin(),onesCountWithRows.end());
        for(int i=0;i<onesCountWithRows.size()-1;i++){
            if(onesCountWithRows[i].first == onesCountWithRows[i+1].first){
                if(onesCountWithRows[i].second > onesCountWithRows[i+1].second)
                    swap(onesCountWithRows[i],onesCountWithRows[i+1]);
            }
        }
        for(int i=0;i<k;i++) ans.push_back(onesCountWithRows[i].second);
        return ans;
    }
};