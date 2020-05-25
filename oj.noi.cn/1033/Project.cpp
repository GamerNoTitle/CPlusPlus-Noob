#include<iostream>
using namespace std;
int main()
{
    int line;
    cin>>line;
    for(int i=1;i<=line;i++)
    {
        for(int n=1;n<=i;n++)
        {
            cout<<n<<'*'<<i<<'='<<n*i;
            if(n!=i) cout<<' ';
        }
        if(i!=line) cout<<endl;
    }
    return 0;
}
