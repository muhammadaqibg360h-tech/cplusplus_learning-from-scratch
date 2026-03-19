#include <iostream>
using namespace std;
int main()
{
    int Digit;
    int arr[9]={0};
    int found;
    int i;
    
    for(i=0; i<=9; i++)
    {
        arr[i]=i;
    }
    
    cout<<"Enter the Number: ";
    cin>>Digit;
    
    for(i=0; i<9; i++)
    {
        if(Digit==arr[i])
        {
            found=1;
            break;
        }
        
    }
    
    if (found==1)
    {
        cout<<"the integer found at index No. "<< i;
    }
    
    else
    {
        cout<<"not found";
    }
    
}

