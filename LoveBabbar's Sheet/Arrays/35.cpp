#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define loop(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int m,n,ptr1=0,ptr2=0,ptr3=0;
    cin>>m>>n;
    int a[m],b[n],c[m+n];
    loop(i,0,m) cin>>a[i];
    loop(i,0,n) cin>>b[i];
    sort(a,a+m);
    sort(b,b+n);
    
        while((ptr2<n) && (ptr1<m))
        {
            if(a[ptr1]<=b[ptr2])
            {
                c[ptr3] = a[ptr1];
                ptr1++;
                ptr3++;
                // cout<<"PTR1 "<<ptr1<<endl;
            } 
            else{
                c[ptr3] = b[ptr2];
                ptr2++;
                ptr3++;
                // cout<<"PTR2 "<<ptr2<<endl;
            }
        }
        if(m==ptr1)
        {
            loop(i,(ptr2),n) 
            {
                c[ptr3] = b[i];
                ptr3++;
            }
        }else if(n == ptr2)
        {
            loop(i,(ptr1),m)
            {
                c[ptr3] = a[i];
                ptr3++;
            }
        }
        // loop(i,0,(m+n)) cout<<c[i]<<" ";

        if((m+n)%2==0)
        {
            int fI = (m+n)/2 - 1;
            int lI = (m+n)/2;
            cout<<"Median = "<<(c[fI]+c[lI])/2;
        }else{
            int index = (m+n)/2;
            cout<<"Median = "<<c[index];
        }
return 0;
}