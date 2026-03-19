#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    char ter;
    int anInt;
    char myInt[15];
    while(ter!='n' && ter!='N'){
        
        cout<<"enter an Integer    ";
        cin>>myInt;
        
        if(atoi(myInt)==0){
            cout<<"\nplease Input the correct intger"<<endl;
        }
        else{
            anInt=atoi(myInt);
            if(anInt<10 || anInt>100 ){
                
                cout<<"shoud be between 10 and 100"<<endl;
                
            }
            
            else{
                cout<<"Welldone  the integer "<<myInt<<" is between 10 and 100";
                
            }
        }
        
        cout<<endl<<"do you want to continue n/y          ";
        cin>>ter;
        
        
        
    }
    
    cout<<"good Bye";
    
    
}
