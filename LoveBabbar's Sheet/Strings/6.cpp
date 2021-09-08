#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str1,str2,str3;
        getline(cin,str1);
        getline(cin,str2);
        getline(cin,str3);
        
         string temp = str1+str2;
         if(str3.length()!=temp.length()) cout<<"3rd string is not a valid shuffle of the two given strings"<<endl;
         else{
         int str1Ptr=0,str2Ptr=0,str3Ptr=0;
         while(str3Ptr<str3.length())
         {
             if(str1Ptr<str1.length() && str1[str1Ptr] == str3[str3Ptr]) str1Ptr++;
             else if(str2Ptr<str2.length() && str2[str2Ptr] == str3[str3Ptr]) str2Ptr++;
             else break;
             str3Ptr++;
         }
         if(str3Ptr == str3.length()) cout<<"Yes";
         else cout<<"No";
         }
    }
return 0;
}