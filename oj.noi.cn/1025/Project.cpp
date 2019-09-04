#include<iostream>
using namespace std;
int main()
{
	int gold=0,sliver=0,bronze=0,day=0,sum_gold=0,sum_sliver=0,sum_bronze=0,sum=0;
	cin>>day;
	for (int i=1;i<=day;i++)
	{
		cin>>gold>>sliver>>bronze;
		sum_gold=sum_gold+gold;
		sum_sliver=sum_sliver+sliver;
		sum_bronze=sum_bronze+bronze;
	}
	sum=sum_gold+sum_sliver+sum_bronze;
	cout<<sum_gold<<" "<<sum_sliver<<" "<<sum_bronze<<" "<<sum;
	return 0;
} 
