#include <iostream>
using namespace std ;
int main(){
    int number=0;
    cout<<"enter the number to checke whether the fourth digit is set or unset ";
    cin>>number;
    
    if(number & 0x8){
        cout<<"the bit is set";
    }
    else{
        cout<<"the bit is not set";
    }
}


