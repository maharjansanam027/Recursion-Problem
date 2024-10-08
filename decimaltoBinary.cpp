#include<iostream>
using namespace std;
void decimaltoBinary(int);
int main()
{
    int n=25;
    decimaltoBinary(n);
    return 1;
}

void decimaltoBinary(int x)
{
    if(x>0)
    {
        decimaltoBinary(x/2);
        cout<<x%2;
    }
}
