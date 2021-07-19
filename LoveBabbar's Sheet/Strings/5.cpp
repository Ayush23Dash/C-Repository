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
    while(t--)
    {
        string str1,str2,temp;
        cin>>str1;
        cin>>str2;
        temp = str1+str1;
        size_t found = temp.find(str2);
        if(found!=string::npos)
        {
            cout<<"\""<<str2<<"\" found in "<<str1<<endl;
        }
        else
        cout<<"\""<<str2<<"\" not found ";

    }
return 0;
}