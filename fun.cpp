#include <iostream>
using namespace std;

int isEven(int number);

int main ()
{
    int x;
    
    cout<<"enter the number to check even or odd:\t";
    cin>>x;
    
    if(isEven(x))
    {
        cout<<"the number is even";
    }
    else
    {
        cout<<"the number is odd";
    }
}

int isEven(int number)
{
    if (number%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
