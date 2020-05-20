#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
using namespace std;
bool cmp(int a, int b)
{
    return a>b;
}
int main()
{
    int a[20];
    srand(time(0));
    for (int i = 0; i < 20; i++)
    {
        a[i]=rand() % 100 + 1;
        cout<<a[i]<<" ";
    }
    cout << endl;
    sort(a, a+20, cmp);
    for (int i = 0; i < 20; i++)
        cout << a[i] << " ";
}