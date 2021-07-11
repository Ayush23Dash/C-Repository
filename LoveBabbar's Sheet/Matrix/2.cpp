//Solution for Leetcode problem 74
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int targetRow=-1,flag=0;
        for(int i=0;i<m;i++)
        {
            if(target<=matrix[i][n-1])
            {
                targetRow = i;
                break;
            }
                
        }
        if(targetRow==-1) return 0;
        for(int i=0;i<n;i++)
        {
            if(matrix[targetRow][i] == target) flag++;
            
        }
        if(flag!=0) return true;
        else return false;
    }
};