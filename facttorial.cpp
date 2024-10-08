#include<iostream>
using namespace std;
int factorial(int);
int main()
{
    int n=3;
    cout<<"factorial of n  is "<<factorial(n);
    return 1;
}

int factorial(int n)
{
    if(n==1)
        return 1;
    return n*factorial(n-1);
}

