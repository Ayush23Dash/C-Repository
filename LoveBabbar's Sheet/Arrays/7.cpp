#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
void rotate(int arr[], int n);
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
        int a[n],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        rotate(a,n);
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }

return 0;
}
void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i=(n-2);i>=0;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0]=temp;
}