#include <iostream>
#include <stdlib.h>
#include <strings.h>
using namespace std;


int main(int argc, char *argv[]){
    int disp, count;
    
    if(argc<2){
        
        cout<<"Enter the lenght of count"<<endl;
        cout<<"on the command line. Try Again"<<endl;
        
        return 1;
    }
    
    if (argc==3 && !strcmp(*(argv+2), "display")){
        disp=1;
    }
    else{
        disp=0;
    }
    
    for(count=atoi(*(argv+1)); count; --count){
        if (disp){
            cout<<count<<' ';
        }
    }
    
    
    cout<<'\a';


 
}


