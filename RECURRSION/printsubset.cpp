#include<bits/stdc++.h>
using namespace std;
void printsubset(string ip, string op)
{
	if(ip.length()==0)
	{
		cout<<op<<"\n";
		return;
	}
	string op1=op;
	string op2=op;;
	op2.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	printsubset(ip, op1);
	printsubset(ip, op2);
	return;
}
int main()
{
	string ip;
	cin>>ip;
	string op="";
	printsubset(ip,op);
	return 0;
}
