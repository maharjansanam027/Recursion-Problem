
#include<iostream>
using namespace std;
int fibonacci(int);
int main()
{
    int n=10;
    cout<<"Fibonacci series of nth term is: "<<fibonacci(n);
    return 1;
}

int fibonacci(int n)
{
    if(n==0 || n==1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
