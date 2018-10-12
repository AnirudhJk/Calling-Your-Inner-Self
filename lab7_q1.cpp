//library
#include<iostream>
using namespace std;

int n;
int ret(int num,int i)
{
if (i>num)
return 1;
else 
cout<<i<<endl;
i++;
ret(n,i);
}

int ret(int,int);
int main()
{
cout<<"insert number : ";
cin>>n;
ret(n,1);
return 0;
}