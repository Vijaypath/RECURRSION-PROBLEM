#include<bits/stdc++.h>
using namespace std;
void solve(int n, char from_rod, char to_rod,char helper)
{
	if(n==1)
	{
cout << "Move disk 1 from rod " << from_rod <<" to rod " << to_rod<<endl;
				return;
}
solve(n-1, from_rod, helper, to_rod);
cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
solve(n-1, helper, to_rod, from_rod);
//return;
}
int main()
{
	int n;
	//char s,h,d;
	cin>>n;
	solve(n,'s','d','h');
}
