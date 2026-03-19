#include <iostream>
using namespace std;

long factorial(long n)
{
    if (n<1)
    {
        return 1;
    }
    
    else
    {
        return n*factorial(n-1);
    }
}


int main()
{
    long x=2;
    
    cout<<factorial(x);
    
    
}


