#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int nZ=0,nO=0,nT=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            nZ++;
            else if(a[i]==1)
            nO++;
           else if(a[i]==2)
            nT++;
        }
        for(int i=0;i<nZ;i++)
        {
            a[i]=0;
        }
        for(int i=nZ;i<(nZ+nO);i++)
        {
            a[i]=1;
        }
        for(int i=(nZ+nO);i<(nZ+nO+nT);i++)
        {
            a[i]=2;
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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        Solution ob;
        ob.sort012(a,n);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}