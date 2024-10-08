

#include<iostream>
using namespace std;
int power(int,int);
int main()
{
    int a=2,b=5;
    cout<<"Power of this number is "<<power(a,b);
    return 1;
}

int power(int a,int b)
{
    if(b==0)
        return 1;
    if(b>0)
        return a*power(a,b-1);
    if(b<0)
        return 1/a*power(a,b+1);
}
