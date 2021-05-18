#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> rotLeft(vector<int>a, size_t d) {
    vector<int>sub_array;
    vector<int>main_array;
    int m;
    for(size_t i=0;i<a.size();i++)
    {
    	m=i-d;
        if(m<0)
        {
            sub_array.push_back(a.at(i));
        }
        else if(m>=0)
        {
            main_array.push_back(a.at(i));
        }
    }

for(size_t i=0;i<sub_array.size();i++)
{
	main_array.push_back(sub_array.at(i));
}
    return main_array;
}
int main() {
    int n;
   vector<int>a(n);
   int temp;
   size_t d;
   cout<<"Enter vector size";
   cin>>n;
   cout<<"Enter vector";
   for(int i=0;i<n;i++)
   {
       cin>>temp;
       a.push_back(temp);
   }
   cout<<"Enter d : ";
   cin>>d;
   vector<int> result = rotLeft(a, d);
   for(size_t i=0;i<result.size();i++)
   {
       cout<<result.at(i)<<" ";
   }
    return 0;
}
