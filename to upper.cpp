#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <strings.h>
using namespace std;

void convtoup(char *sptr);
int main(){
    
    char s[30]="welcome to virtual university";
    
    cout<<"string before conversion      "<<s<<endl;
    
    convtoup(s);
    
    cout<<"String after conversion   "<< s;
    
    
}
void convtoup(char *sptr){
    while(*sptr !='\0'){
        if(islower(*sptr)){
            *sptr=toupper(*sptr);
        }
        *sptr++;
    }
}
