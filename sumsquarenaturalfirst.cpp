#include<iostream>
using namespace std;
int sumsquare(int);
int main()
{
    int n=3;
    cout<<"Sum of n even natural number is "<<sumsquare(n);
    return 1;
}

int sumsquare(int n)
{
    if(n==1)
        return 1;
    return n*n+sumsquare(n-1);
}

