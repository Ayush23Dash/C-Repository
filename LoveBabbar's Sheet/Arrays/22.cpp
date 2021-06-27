#include<bits/stdc++.h>
#define MAX 1000
#define ll long long
#define vi vector<int>
using namespace std;
int multiply(int a[],int size,int x);
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

   int N,size=1;
   int arr[MAX];
   cin>>N;
   arr[0]=1;
    for(int i=2;i<=N;i++)
    size=multiply(arr,size,i);
for(int i=(size-1);i>=0;i--)
{
    cout<<arr[i];
}
return 0;
}

int multiply(int a[],int size,int x)
{
    int carry=0,product=1;
    for(int i=0;i<size;i++)
    {
        product=a[i]*x + carry;
        a[i] = product%10;
        carry = product/10;
    }
    while(carry)
    {
        a[size] = carry%10;
        carry/=10;
        size++;
    }
    return size;
}