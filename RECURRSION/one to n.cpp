#include<iostream>
using namespace std;
void oneton(int n)
{
 if(n<=0)
 {
   return ;
}		
cout<<n<<" ";
oneton(n-1); 
//cout<<n<<" ";
//SWAP ABOVE TWO STATEMENTS WILL GET REVERSE OF THE NUMBER FROM 'N' TO 'ONE'
}
int main()
{
   int n;
   cin>>n;
   oneton(n);
}
