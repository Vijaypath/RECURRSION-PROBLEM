#include<bits/stdc++.h>
using namespace std;
int ksymbol(int n, int k)
{
	if(n==1 && k==1)
	   return 1;
	  
	  int mid=pow(2,n-1)/2;
	  
	  if(k<=mid)
	  
	  return ksymbol(n-1,k);
	  else
	  
	    return !ksymbol(n-1, k-mid);
}
