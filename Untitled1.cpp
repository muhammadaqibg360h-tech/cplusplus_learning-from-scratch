#include <iostream>
using namespace std;



main()
{
    int digits[3];
    int position=0;
    int number=0;
    int digit=0;
    int x=0;
    
    cout<<"Please enter a 4 Digit Number:\t";
    
    cin>>number;
   
    
    for (int i=0; i<=3; i++)
    {
         digit=number%10;
        
        digits[i]=digit;
        number=number/10;
    
    }
    
    for (int i=3; i>=0; i--)
    {
        position+=1;
        cout<<" the digit at position "<<position<<" is:\t"<<digits[i]<<endl;
    }
    
    
   /* digit=number%10;
    
    cout<<"the digit is:\t"<<digit;
    
    number=number/10;
    
    digit=number%10;
    
    cout<<"the digit is:\t"<<digit;*/
    
    
    
    
}


