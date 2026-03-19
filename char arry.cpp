#include <iostream>

using namespace std;

int main()
{
    char str[100];
    
    cout<<"please enter you name :  ";
    cin.getline(str,100);
    
    
    for(int i=0; i<100; i++)
    {
        if(str[i]=='\0')
        {
            break;
        }
        else
        {
            cout<<str[i];
        }
      
       
    }
}
