#include<iostream>
using namespace std;
int main()
{
    long long a,result=0;
	cin>>a;
	for (long long i=1;i<=a;i++)
	{
		long long x;
		x=a%i;
		if (x==0)
		{
			result++;
		}	
	 } 
	 cout<<result;
	 return 0;
}
