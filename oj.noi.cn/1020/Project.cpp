#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num,a,b,c,d,digit=0;
	cin>>num;
	a=floor(num/1000);
	b=floor(num/100)-a*10;
	c=floor(num/10)-a*100-b*10;
	d=num-a*1000-b*100-c*10;
	if(a!=0)
	{
		digit=4;
		cout<<digit<<endl;
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<c<<endl;
		cout<<d<<endl;
	}
	else if(b!=0)
	{
		digit=3;
		cout<<digit<<endl;
		cout<<b<<endl;
		cout<<c<<endl;
		cout<<d<<endl;
	}
	else if(c!=0)
	{
		digit=2;
		cout<<digit<<endl;
		cout<<c<<endl;
		cout<<d<<endl;
	}
	else
	{
		digit=1;
		cout<<digit<<endl;
		cout<<d<<endl;
	}
	return 0;
}
