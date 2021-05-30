#include<bits/stdc++.h>
using namespace std;
stack reverse(stack<int>s, int val)
{
	if(s.size()==1)
	{
		//s.push(val);
		return;
	}
	int tmp=s.top();
	s.pop();
	everse(s);
	insert(s,tmp);
}
void insert(stack<int>&s,int val)
{
	if(s.size()==0)
	{
		s.push(val);
		return;
	}
	int tmp=s.top();
	s.pop();
	insert(s, tmp);
	s.push(tmp);
	return;
}
