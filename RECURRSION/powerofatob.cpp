#include<iostream>
using namespace std;
int powerof(int a,int b)
{
	if(b==0)
	return 1;
	if(b%2==0)
	{
		return powerof(a*a,b/2);
		
	}
	else
	
	return powerof(a*a,b/2)*a;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<powerof(a,b);
}
