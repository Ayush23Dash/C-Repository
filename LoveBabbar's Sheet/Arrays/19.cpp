#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>ans;
            int low1=0,low2=0,low3=0;
            int prev1,prev2,prev3;
            prev1=prev2=prev3=INT_MIN;
            while(low1<n1 && low2<n2 && low3<n3)
            {
                while(A[low1]==prev1 && low1<n1) low1++;
                while(B[low2]==prev2 && low2<n2) low2++;
                while(C[low3]==prev3 && low3<n3) low3++;
                
                if(A[low1]==B[low2] && B[low2]==C[low3])
                {
                    ans.push_back(A[low1]);
                    prev1=A[low1];
                    prev2=B[low2];
                    prev3=C[low3];
                    low1++;
                    low2++;
                    low3++;
                }
                else if(A[low1]<B[low2])
                {
                    prev1=A[low1];
                    low1++;
                }
                else if(B[low2]<C[low3])
                {
                    prev2=B[low2];
                    low2++;
                }
                else{
                    prev3=C[low3];
                    low3++;
                }
            }
            return ans;
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
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        int A[n1],B[n2],C[n3];
        for(int i=0;i<n1;i++) cin>>A[i];
        for(int i=0;i<n2;i++) cin>>B[i];
        for(int i=0;i<n3;i++) cin>>C[i];
        Solution ob;
        vector<int> res = ob.commonElements(A,B,C,n1,n2,n3);
        if(res.size() ==0)
        cout<<"-1";
        for(int i=0;i<res.size();i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
        
        
    }
    
return 0;
}
