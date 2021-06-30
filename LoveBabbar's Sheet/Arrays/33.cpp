#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
int minSwap(int *arr, int n, int k) {
    // Complet the function
    int goodValues=0,badValues=0,bV=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
        goodValues++;
        else{
            bV++;
        }
    }
    if(bV==0 || bV==n)  return 0;
    for(int i=0;i<goodValues;i++)
    {
        if(arr[i]>k)
        badValues++;
    }
    
    int low=0,high=goodValues,swap=badValues;
    while(high<n)
    {
        if(arr[low]>k) badValues--;
        if(arr[high]>k) badValues++;
        swap=min(swap,badValues);
        low++;
        high++;
    }
    return (swap);
    
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        cin>>k;
        cout<<minSwap(arr,n,k);
    }

return 0;
}