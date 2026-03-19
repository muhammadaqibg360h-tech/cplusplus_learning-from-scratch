#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <strings.h>

using namespace std;


void cnvtlwr(char *sptr);

int main(){
    
    char s[]="WELCOME TO VIRTUAL UNIVERSITY";
    
    cout<<"the string before calling the function      "<<s<<endl;
    
    cnvtlwr(s);
    
    cout<<"the string after calling function    "<<s;
    
}

void cnvtlwr(char *sptr){
    while(*sptr !='\0'){
        if(isupper(*sptr)){
            *sptr=tolower(*sptr);
        }
        *sptr++;
    }
}


