#include <iostream>
using namespace std;
int main()
{
    int num1[5],num2[5],i,equal;
    
    cout<<"Enter five integers for the first array "<<endl;
    
    for(i=0; i<5; i++)
    {
        cin>>num1[i];
    }
    
    cout<<"Enter five integers for the 2nd array "<<endl;
    
    for(i=0; i<5; i++)
    {
        cin>>num2[i];
    }
    
    cout<<"the values in the fist array is: ";
    for(i=0; i<5; i++)
    {
        cout<<num1[i]<<"\t";
    }
    
    
    cout<<endl<<"the values in the 2nd array is: ";
    for(i=0; i<5; i++)
    {
        cout<<num2[i]<<"\t";
    }
    



    
    for(i=0; i<5; i++)
    {
        if(num1[i]!=num2[i])
        {
            equal=0;
            break;
        }
        else
        {
            equal=1;
        }
    }
    
    if(equal==1)
    {
        cout<<"arrays are same ";
    }
    else
    {
        cout<<"arrays are not same ";
    }
    
    
}


