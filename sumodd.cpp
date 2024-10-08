#include<iostream>
using namespace std;
int sumodd(int);
int main()
{
    int n=5;
    cout<<"Sum of n natural number is "<<sumodd(n);
    return 1;
}

int sumodd(int n)
{
    if(n==1)
        return 1;
    return 2*n-1+sumodd(n-1);
}
