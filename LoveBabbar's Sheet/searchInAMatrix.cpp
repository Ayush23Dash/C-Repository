//Solution for "https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1"
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
public:	
	int matSearch (vector <vector <int>> &matrix, int N, int M, int x)
	{
	    // your code here
// 	int row = -1;
//     for(int i=0;i<N;i++)
//     {
//         if(x<=matrix[i][M-1])
//         {
//             row = i;
//             break;
//         }
//     }
//     if(row==-1) return 0;

//     for(int i=row;i<N;i++)
//     {
//         for(int j=0;j<M;j++)
//         {
//             if(matrix[i][j] == x)
//             {
//                 return 1;
//                 break;
//             }
//         }
//     }
    
//     return 0;
int i=0,j=M-1;
while(i<N && j>=0)
{
    if(matrix[i][j]==x) return 1;
    if(matrix[i][j]>x) j--;
    else i++;
}
return 0;
	}
};
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        int x;
        cin>>x;
        Solution ob;
        cout<<ob.matSearch(arr,n,m,x)<<endl;
    }
    
return 0;
}