class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<m;i++){
            if(target<=matrix[i][n-1]) {
                row=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(matrix[row][i]==target) return true;
        }
        return false;
    }
};