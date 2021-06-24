#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
    // int index=0,temp=0,flag=0;
    // while(index<=(n-3))
    // {
    //     temp=A[index];
    //     for(int i=index+1;i<n;i++)
    //     {
    //         for(int j=i+1;j<n;j++)
    //         {
    //             if(temp+A[i]+A[j]==X)
    //             {
    //                 return 1;
    //                 flag++;
    //                 break;
    //             }
    //         }
    //         if(flag==1) break;
    //     }
    //     if(flag==1) break;
    //     index++;
    // }
    // return 0;
    sort(A,A+n);
    int low,high,temp,temp1,flag=0;
    for(int i=0;i<=(n-3);i++)
    {
        temp=A[i];
        temp1 = A[i+1];
        low=i+1;
        high=n-1;
        while(low<high)
        {
            if(temp+A[low]+A[high] == X)
            {
                return true;
                flag++;
                break;
            }else if(temp+A[low]+A[high]>X){
                high--;
            }
            else if(temp+A[low]+A[high]<X)
            low++;
        }
        if(flag==1) break;
    }
    return false;
    }

};
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int T;
    cin>>T;
    while(T--)
    {
        int n,X;
        cin>>n>>X;
        int i,A[n];
        for(i=0;i<n;i++)
        {
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.find3Numbers(A,n,X)<<endl;
    }
return 0;
}