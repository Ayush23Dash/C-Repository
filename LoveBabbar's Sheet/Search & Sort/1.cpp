#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

vector<int> find(int a[],int n,int x);
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
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int>ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }

return 0;
}

vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int>ans;
    int firstIndex =0,lastIndex=n-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x){
            firstIndex = i;
            ans.push_back(firstIndex);
            break;
        }else if(i==n-1){
            ans.push_back(-1);
        }
    }
    
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==x)
        {
            lastIndex=i;
            ans.push_back(lastIndex);
            break;
        }else if(i ==0){
            ans.push_back(-1);
        }
    }
    
    return ans;
}