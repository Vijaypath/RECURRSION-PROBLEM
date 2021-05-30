#include<bits/stdc++.h>
using namespace std;
void permuwithspace(string ip,string op)
{
	if(ip.length()==0)
	{
		cout<<op<<endl;
		return;
	}
	string op1=op;
	string op2=op;
	op1.push_back('_');
	op1.push_back(ip[0]);
	op2.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	permuwithspace(ip,op1);
	permuwithspace(ip,op2);
	return;
	
}
int main()
{
	string ip,op;
	cin>>ip;
	op="";
	op.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	permuwithspace(ip,op);
}
