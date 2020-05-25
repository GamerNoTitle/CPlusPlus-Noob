#include<iostream>
using namespace std;
int main()
{
    int input,times=1;
    cin>>input;
    while(true)
    {
        if(input==1) break;
        if(input%2==1)
        {
            input=input*3+1;
            times++;
        }
        else
        {
            input=input/2;
            times++;
        }
    }
    cout<<times;
    return 0;
}