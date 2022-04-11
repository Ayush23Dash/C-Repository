class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        while(k--)
        {
            int element = grid[0][0],nextElement;
            for(int i=0;i<grid.size();i++)
        {
            int m = grid.size();
            for(int j=0;j<grid[i].size();j++)
            {
                int n= grid[i].size();
                
                if(i == (m-1) && j == (n-1))
                {
                    nextElement = grid[0][0];//3
                    grid[0][0] = element;//13
                    element = nextElement;//3
                }
                else if(j == (n-1))
                {
                    nextElement = grid[i+1][0]; //12
                    grid[i+1][0] = element; //10
                    element = nextElement; //12
                }
                else{
                    nextElement = grid[i][j+1]; //13
                    grid[i][j+1] = element; //12
                    element = nextElement; //13
                }
            }
        }
        }

        
        return grid;
    }
};