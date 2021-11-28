#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<int>rowArray,colArray;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    
                    rowArray.push_back(i);
                    colArray.push_back(j);
                    
                    // cout<<"i = "<<i<<endl<<"j = " <<j;
                    
                    
                }
            }
        }
        
        for(int k=0;k<rowArray.size();k++){
            int row = rowArray[k];
            // cout<<row<<" ";
            for(int j=0;j<matrix[0].size();j++){
                matrix[row][j]=0;
            }
        }
        
        
        for(int k=0;k<colArray.size();k++){
            int col=colArray[k];
            // cout<<col<<" ";
            for(int j=0;j<matrix.size();j++){
                matrix[j][col]=0;
            }
        }
     for(int i=0;i<matrix.size();i++)  {
		 for(int j=0;j<matrix[0].size();j++){
			 cout<<matrix[i][j]<<" ";
		 }
		 cout<<"\n";
	 }
	 
    }
};

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	vector<vector<int>>matrix;
	int r,c;
	cin>>r>>c;
	for(int i=0;i<r;i++){
		vector<int>temp;
		for(int j=0;j<c;j++){
			int val;
			cin>>val;
			temp.push_back(val);
		}
		matrix.push_back(temp);
	}

	


	Solution obj;
	obj.setZeroes(matrix);

	
return 0;
}