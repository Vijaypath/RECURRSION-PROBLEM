#include<bits/stdc++.h>
using namespace std;
void sortarr(vector<int>&v)
{
	if(v.size()==1)
	  return;
	  int tmp=v[v.size()-1];
	    v.pop_back();
	    sort(v.begin(), v.end());
	    insert(v,tmp);
	    return;
  
}
void insert(vector<int>&v,int tmp)
{
	if(v.size()==0 || v[v.size()-1]<=tmp)
	{
	   v.push_back(tmp);
	   return;
}
int val=v[v.size()-1];
v.pop_back();
insert(v,tmp);
v.pus_back();
return;
}

int main()
{
	vector<int>v
	for(int i=0; i<v.size(); i++)
	{
		cin>>v[i];
	}
	cout<<sortarr(v);
}
