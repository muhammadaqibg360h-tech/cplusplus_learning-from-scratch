#include <iostream>
using namespace std;

int squar(int x)
{
    return (x*x);
}

int main()
{
    int number,result;
    number =0;
    result =0;
    
    cout<<"input the number to calculate the squar:\t";
    cin>>number;
    
    result= squar(number+2);
    
    cout<<"the squar of the "<<number<<" is =\t"<<result;
    
}


