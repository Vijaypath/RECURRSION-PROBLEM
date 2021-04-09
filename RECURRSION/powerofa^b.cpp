#include<iostream>
using namespace std;
int powerof(int a,int b)
{
	if(b==0)
	{
		return 1;
	}
	return powerof(a,b-1)*a;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<powerof(a,b);
}
