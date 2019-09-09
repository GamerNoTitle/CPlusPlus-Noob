#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a[9],sum=0,result=0,max=0,min=100,average=0;
	for (int n=0;n<=9;n++)
	{
		cin>>a[n];
	}
	for (int i=0;i<=9;i++)
	{
		if (a[i]<min)
		{
			min=a[i];
		}
		if (a[i]>max)
		{
			max=a[i];
		}
		sum=sum+a[i];
	}
	sum=sum-min-max;
	average=sum/8;
	cout<<fixed<<setprecision(3)<<average;
	return 0;
}
