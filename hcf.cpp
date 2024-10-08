
#include<iostream>
using namespace std;
int hcf(int,int);
int main()
{
    int a=180,b=75;
    cout<<"HCF of two number is: "<<hcf(a,b);
    return 1;
}

int hcf(int a,int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a>b)
        return hcf(a%b,b);
    if(a<b)
    return hcf(a,b%a);
}
