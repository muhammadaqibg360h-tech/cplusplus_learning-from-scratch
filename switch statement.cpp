#include <iostream>
using namespace std;
int main()
{
    char grad;
    cout<<"enter your grad here A to D or F";
    cin>>grad;
    
    switch(grad)
    {
        case 'A':
        case 'a':
            cout<<"execelent";
            break;
        case 'B':
        case 'b':
            cout<<"Very Good";
            break;
        case 'C':
        case 'c':
            
            cout<<"good";
            break;
        
        case 'D':
        case 'd':
            cout<<"Fair";
        case 'F':
        case 'f':
            cout<<"fail";
            break;
        default:
            cout<<"please enter the correct grade";
        
        
        
    }
    
    
    
}


