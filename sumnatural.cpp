#include<iostream>'
using namespace std;
int sum(int);

int main()
{
    int n=5;
    cout<<"Sum of natural number of n is "<<sum(n);
    return 0;
}

int sum(int n)
{
    if(n==1)
        return 1;
    return n+sum(n-1);
}
