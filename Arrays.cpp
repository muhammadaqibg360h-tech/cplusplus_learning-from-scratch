#include <iostream>
using namespace std;
int main()
{
    int numbers[5]={0};
    
    int z,i=0;
    
    cout<<"Program Count the positive integers "<<endl;
    do
    {
        cout<<"enter positive integer to count or -1 to end the program ";
        cin>>z;
        if (z!=-1)
        {
            numbers[i]=z;
            i++;
        }
        
            
        
        
        
        
    }while(z!=-1 && i<=4);
    
    cout<<"the total positive integer entered by the user is "<<i;
    
}


