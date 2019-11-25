#include<iostream>
#include<conio.h>
using namespace std;
void pallindrome(int n)
{
	int arr[20],ar1[20],ar2[20],i,j,q,r,index=0,p=0;
	while(n!=0)
	{
		q=n/10;
		r=n%10;
		n=q;
		arr[index]=r;
		index++;
	}
	
//	To print the digits as an array
	for(i=(index-1);i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	
//	To put digits and its reverse numbers in two arrays
	for(i=0,j=(index-1);i<index,j>=0;i++,j--)
	{
		ar1[i]=arr[i];
		ar2[i]=arr[j];
	}
	
//	To increase counter equal to index if its a pallindrome
	for(i=0;i<index;i++)
	{
		if(ar1[i]==ar2[i])
		p++;
		else
		p=0;
	}
	
//	To print pallindrome
	if(p==(index))
	printf("\nIt is a pallindrome");
	else
	printf("\nIt is not a pallindrome");
}

//Main Function
int main()
{
	int n,ch;
	printf("Enter number to check if its pallindrome or not\n");
	scanf("%d",&n);
	pallindrome(n);
	do{
		printf("\nDo you want to check for more pallindromic numbers?(1/0)\n");
		scanf("%d",&ch);
		label:if(ch==1)
		{
	   		printf("Enter number to check if its pallindrome or not\n");
			scanf("%d",&n);
			pallindrome(n);
		}
		else if (ch==0)
		{
			printf("Bye...");
		}
		else
		{
			printf("Enter correct choice(1/0)\n");
			scanf("%d",&ch);
			goto label;
		}
	}while(ch!=0);
	return 0;
}
