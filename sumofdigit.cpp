
#include<iostream>
using namespace std;
int sumofdigit(int);
int main()
{
    int n=5;
    cout<<"Sum of n even natural number is "<<sumofdigit(n);
    return 1;
}

int sumofdigit(int n)
{
    if(n==0)
        return 0;
    return n%10+sumofdigit(n/10);
}

