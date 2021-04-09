#include<iostream>
using namespace std;
int sumofnatno(int n)
{
	if(n==0)
	{
		return 0;
	}
	return sumofnatno(n-1)+n;
}
int main()
{
	int n;
	cin>>n;
	cout<<(sumofnatno(n));
}
