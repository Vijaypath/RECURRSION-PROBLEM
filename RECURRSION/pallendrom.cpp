#include<iostream>
#include<cstring>
using namespace std;

bool palendrom(string s,int l,int r)
{
	if(l>=r)
	{
		return true;
	}
	if(s[l]!=s[r])
	{
		return false;
	}
	return palendrom(s,l+1,r-1);
}
int main()
{   int n,l,r;
    cin>>n; 
	string s;
	cin>>s;
	l=0;
	r=n-1;
	cout<<(palendrom(s,l,r));
}
