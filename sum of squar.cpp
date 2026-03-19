#include <iostream>
using namespace std;
int main()
{
    
    int number,sum;
    number=0;
    sum=0;
    
    //prompt to user to input the number to which sum of squar required
    
    cout<<"Enter the Number to which sum of squar required:\t";
    
    cin>>number;
    
    for(int i=1; i<=number; i++)
    {
        cout<<i<< " Squar = "<<i*i<<endl;
        sum=sum+(i*i);
    }
    
    cout<<"the sum of squar of first "<<number<<"integers =\t"<<sum;
    
    
}

