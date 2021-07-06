#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
  public:    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      if(n==1) return 1;
      sort(arr,arr+n);
      map<int,int>mp;
      int a[n];
      for(int i=0;i<n;i++) mp[arr[i]]++;
      int i=0,j=1,size=INT_MIN,counter=1,newI=0;
      
      //New Array to remove duplicates
      for(auto it : mp)
      {
          a[newI++]=it.first;
      }
      
      
        while(j<newI)
        {
            
            if(a[j]-a[j-1]>1)
            {
                size = max(size,j-i);
                i=j;
            }
            
            //If j reaches at end and there is a continuous subsequence
            if(a[j]-a[j-1]==1 && j==newI-1)
            {
                size = max(size,j-i+1);
            }
            
            //To check if whole array is the needed subsequence
            if(a[j]-a[j-1]==1) counter++;
            j++;
        }

        if(counter==newI) return newI;
        return size;
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
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        Solution obj;
        cout<<obj.findLongestConseqSubseq(a,n)<<endl;
    }
    
return 0;
}