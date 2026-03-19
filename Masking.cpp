#include <iostream>
using namespace std;

int main(){
    char password[10]="9405223";
    int size=sizeof(password)/sizeof(password[0]);
    char key='B';
    
    char encr[10];
    char decr[10];
    for(int i=0; i<size; i++){
        encr[i]=password[i]^key;
    }
    
    cout<<encr<<endl;
    
     for(int i=0; i<size; i++){
        decr[i]=encr[i]^key;
    }
    cout<<decr<<endl;
    
    
}
