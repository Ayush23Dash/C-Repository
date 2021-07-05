#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

string isSubset(int a1[],int a2[],int n,int m);

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
        int a1[n],a2[m];
        for(int i=0;i<n;i++) cin>>a1[i];
        for(int i=0;i<m;i++) cin>>a2[i];
        cout<<isSubset(a1,a2,n,m)<<endl;
    }
    
return 0;
}

string isSubset(int a1[], int a2[], int n, int m) {
    int low2=0,low1=0,counter=0;
    sort(a1,a1+n);
    sort(a2,a2+m);
    while(low2<m)
    {
        if(a2[low2]>a1[low1]) low1++;
        else if(a2[low2]==a1[low1])
        {
            counter++;
            low1++;
            low2++;
        }
        else if(a2[low2]<a1[low1])
        {
            low2++;
            break;
        }
    }
    if(counter==m)
    {
        return "Yes";
    }else{
        return "No";
    }
}