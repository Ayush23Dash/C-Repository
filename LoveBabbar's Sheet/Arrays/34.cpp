#include<bits/stdc++.h>
using namespace std;
int PalinArray(int a[],int n);
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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<PalinArray(a,n)<<endl;
    }
}
int PalinArray(int a[], int n)
{  //add code here.

int count = 0;
for(int i=0;i<n;i++)
{ 
    int reverse=0,temp=a[i];
    
    while(temp)
    {
        int rem=temp%10;
        reverse = reverse*10 + rem;
        temp/=10;
    }
    if(a[i]==reverse) count++;
}
if(count==n)
{
    return 1;
}else{
    return 0;
}

}
