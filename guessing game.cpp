#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
{
    int z=0, i=0, found=0, arr[6];
    
    srand(time(0));
    
     for(int k=0; k<6; k++)
    {
     arr[k]= 1+rand()%6;
     cout<<arr[k]<<" ";
    }
    cout<<endl;
    cout<<"enter -1 to end the game"<<endl;
    
do
{
    
    cout<<"enter a positive intger: ";
    cin>>z;
    
   found=0;
    
    for(i=0; i<6; i++)
    {
        if(z==arr[i])
        {
            found=1;
            break;
        }
    }
    
    if(found==1)
    {
        cout<<"the digit found at index No. "<<i<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
}while(z!=-1);
}
