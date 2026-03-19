#include <iostream>
#include <ctype.h>

using namespace std;

int main(){
    
    char c;
    int iu=0, il=0, id=0, puc=0, oth=0, ws=0;
    
    cout<<"please enter the charcter to count and then press enter     ";
    while((c=getchar())!='\n'){
        
        if(isupper(c)){
            iu++;
        }
        else if(islower(c)){
            il++;
        }
        
        else if(isdigit(c)){
            id++;
        }
        
        else if(isspace(c)){
            ws++;
        }
        else if(ispunct(c)){
            puc++;
        }
        else{
            oth++;
        }
    }
    
    cout<<"Total Lower case letters      "<<il<<endl;
    cout<<"Total Upper case letters      "<<iu<<endl;
    cout<<"Total digits letters          "<<id<<endl;
    cout<<"Total Punctuations letters    "<<puc<<endl;
    cout<<"Total white spaces            "<<ws<<endl;
    cout<<"Total others                  "<<oth;
    cout<<c;
    
    
    
}

