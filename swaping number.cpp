#include <iostream>
using namespace std;

void swapNumber(int x, int y);

int main()
{
    int numberA=0;
    int numberB=0;
    
    cout<<"enter the Number A: "; cin>>numberA;
    cout<<"Enter the Number B:  "; cin>>numberB;
    
    swapNumber(numberA,numberB);
    
    cout<<"the value of number A after calling the function"<<numberA;
    cout<<endl<<"the value of number B after calling the value"<<numberB;
    
}

void swapNumber(int x, int y)
{
    int temp;
    
    temp=x;
    x=y;
    y=temp;
    
}

