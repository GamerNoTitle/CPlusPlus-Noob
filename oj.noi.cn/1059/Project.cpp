#include<iostream>
#include<string>
using namespace std;
int main()
{
	string cal;
	cin>>cal;
	int result=0,temp=0;
	for (int i=0;i<cal.size()+1;i++)
	{
		if(cal[i]!='+')
		{
			if(cal[i]=='1')
			{
				temp=temp*10+1;
			}
			else if (cal[i]=='2')
			{
				temp=temp*10+2;
			}
			else if (cal[i]=='3')
			{
				temp=temp*10+3;
			}
			else if (cal[i]=='4')
			{
				temp=temp*10+4;
			}
			else if (cal[i]=='5')
			{
				temp=temp*10+5;
			}
			else if (cal[i]=='6')
			{
				temp=temp*10+6;
			}
			else if (cal[i]=='7')
			{
				temp=temp*10+7;
			}
			else if (cal[i]=='8')
			{
				temp=temp*10+8;
			}
			else if (cal[i]=='9')
			{
				temp=temp*10+9;
			}
			else if (cal[i]=='0')
			{
				temp=temp*10+0;
			}
		}
		else if(cal[i]=='+')
		{
			result=result+temp;
			temp=0;
		} 
	}
	result=result+temp;
	cout<<result;
	return 0;	
}
