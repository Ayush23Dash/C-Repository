#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,temp,temp1;
	vector<int>arr;
	cout<<"Enter size of array";
	cin>>n;
	for(int i{0};i<n;i++)
	{
		cin>>temp;
		arr.push_back(temp);
	}
	int start=0,end=n-1;
	while(start<end)
	{
		temp1=arr.at(start);
		arr.at(start)=arr.at(end);
		arr.at(end)=temp1;
		start++;
		end--;
	}
	cout<<"Reversed Array : \n";
	for(int i{0};i<n;i++)
	{
		cout<<arr.at(i)<<"\n";
	}
	
	return 0;
}
