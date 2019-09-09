#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float num=0,total=0;
	cin>>num;
	float temp=0;
	for (float i=31;i>=1;i++)
	{
		temp=num/pow(10,i);
		total=total+temp;
	}
	cout<<total;
} 
