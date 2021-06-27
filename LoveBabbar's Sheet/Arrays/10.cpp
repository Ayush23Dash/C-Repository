#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
class Solution{
    public:
    int minJumps(int arr[],int n)
    {
        int max1=0,halt=0,jump=0;
        if(arr[0] == 0) return -1;
        else if(n==1) return 1;
        else{
            for(int i=0;i<n-1;i++)
            {
                max1=max(max1,(i+arr[i]));
                if(max1>=(n-1))
                {
                    jump++;
                    return jump;
                }
                if(halt==i)
                {
                    halt=max1;
                    jump++;
                }
            }
            if(halt>(n-1))
            {
                return jump;
            }else{
                return -1;
            }
        }
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
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution obj;
        cout<<obj.minJumps(arr,n)<<endl;
    }
return 0;
}