//Solution to https://www.codechef.com/COOK128C/problems/BUILDB
#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int T,N,R,temp,maxT;
	
	vector<int>maxTArr;
// 	cout<<"Enter number of testcases"<<endl;
	cin>>T;
	
	for(int i=1;i<=T;i++)
	{
		vector<int>A;
		vector<int>B;
// 		cout<<endl<<"Enter test cases"<<endl;
	    cin>>N;
	    cin>>R;
	   // cout<<endl;
	   // cout<<"Enter array 1"<<endl;
	    for(int j=0;j<N;j++)
	    {
	    	cin>>temp;
	        A.push_back(temp);
	    }
	   // cout<<endl;
	   // cout<<"Enter array 2"<<endl;
	    for(int j=0;j<N;j++)
	    {
	        cin>>temp;
	        B.push_back(temp);
	    }
	    if(A.size()==1)
	{
	    maxTArr.push_back(A.at(0));
	}else
	{
		int sum =0;
		int z = A.size()-1;
		for(int i{0};i<B.size();i++)
		{
			sum+=B.at(i);
		}
		
		maxT = sum-(z*R);
		maxTArr.push_back(maxT);
	}
	
	}
// 	cout<<endl;
	for(int i=0;i<maxTArr.size();i++)
	{
		cout<<maxTArr.at(i)<<endl;
	}
	
	return 0;
}
