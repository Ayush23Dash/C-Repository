class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>zeroIndexes;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    zeroIndexes.push_back(make_pair(i,j));
                }
            }
        }
        
        for(int i=0;i<zeroIndexes.size();i++){
            int iInd = zeroIndexes[i].first;
            int sInd = zeroIndexes[i].second;
            for(int k=0;k<matrix[iInd].size();k++){
                matrix[iInd][k]=0;
            }
            for(int k=0;k<matrix.size();k++){
                matrix[k][sInd]=0;
            }
        }
        
    }
};