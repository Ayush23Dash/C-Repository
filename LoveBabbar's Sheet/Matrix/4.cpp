#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int firstOneIndex,numberOfOnes,maxOnes=0,rowWithMaxOnes = -2,j=0,previousMaxOnes=-1;
	    for(int i=0;i<n;i++)
	    {
	        while(j<m)
	        {
	            if(arr[i][j]==1)
	            {
	                
	                numberOfOnes = m - j;
	                previousMaxOnes = maxOnes;
	                maxOnes = max(maxOnes,numberOfOnes);
	                
	                if(maxOnes == numberOfOnes && maxOnes>previousMaxOnes)
	                {
	                    rowWithMaxOnes = i;
	                    
	                }
	                break;
	            }
	            j++;
	        }
	        j=0;
	    }
	    if(rowWithMaxOnes==-2) return -1;
	    return rowWithMaxOnes;
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
    while(t--)
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

        Solution ob;
        auto ans = ob.rowWithMax1s(arr,n,m);
        cout<<ans<<"\n";
    }
return 0;
}