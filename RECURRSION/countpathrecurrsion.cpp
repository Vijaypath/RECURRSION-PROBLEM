#include<iostream>
using namespace std;
int countpath(int n,int m)
{
	if(n==1|| m==1)
	{
		return 1;
	}
	return countpath(n-1,m)+countpath(n,m-1);
}
int main()
{
	int n,m;
	//int a[100];
	cin>>n>>m;
	
cout<<(countpath(n,m));
	return 0;
	
}
