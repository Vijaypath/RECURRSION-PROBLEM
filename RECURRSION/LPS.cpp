#include<bits/stdc++.h>
using namespace std;
string LPS(string s1, int m)
{
string s2= reverse(s1.begin(), s1.end());

int n=s2.length();
	if(m==0 || n==0)
	{
		return 0;
	}
	else if(s1[m-1]==s2[n-1])
	{
		return LPS[s1]=1+LCS(s1, s2, m-1, n-1);
	}
	else {
		return LPS[s1]=max(LCS(s1,s2,m-1,n),LCS(s1,s2,m,n-1));
	}
}
int main()
{
	string s1;
	int m;
	cin>>m;
	cin>>s1;
//	cin>>n;
	//cin>>s2;
	cout<<LCS(s1,m);
}
