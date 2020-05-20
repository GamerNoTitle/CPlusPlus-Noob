#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a,b;
	if (a%2!=0 && a%3!=0 && a%4!=0 && a%5!=0 && a&6!=0 && b%2!=0 && b%3!=0 && b%4!=0 && b%5!=0 && b&6!=0)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}