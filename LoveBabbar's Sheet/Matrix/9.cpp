#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define MAX 1000
using namespace std;

int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX],int n,int k);
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
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>mat[i][j];
            }
        }
        int k;
        cin>>k;
        cout<<kthSmallest(mat,n,k)<<endl;
    }

return 0;
}

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  int s = n*n;
  vector<int>a;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          a.push_back(mat[i][j]);
      }
  }
  sort(a.begin(),a.end());
  return a[k-1];
  
}