//Library
#include<iostream>
using namespace std;
int fac(int n)
{
if (n<1)
return 1;
else return n*fac(n-1);
}
//Main function
int main()
{
int u;
cout<<"Enter number for its Factorial : ";
cin>>u;
cout<<fac(u);
return 0;
}