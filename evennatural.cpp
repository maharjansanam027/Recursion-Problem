#include<iostream>
using namespace std;
int sumevem(int);
int main()
{
    int n=3;
    cout<<"Sum of n even natural number is "<<sumevem(n);
    return 1;
}

int sumevem(int n)
{
    if(n==1)
        return 2;
    return 2*n+sumevem(n-1);
}

