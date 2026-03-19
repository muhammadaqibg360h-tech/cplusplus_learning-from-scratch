#include <iostream>
using namespace std;

void copystr(char *dist, const char *src);

int main(){
    
    char strA[80]="this is string a";
    char strB[80];
    
    copystr(strB,strA);
    
    cout<<"this is the String A     "<<strA<<endl;
    cout<<"this is the string B     "<<strB<<endl;
    
}
void copystr(char *dist, const char *src){
    
    while(*src!='\0'){
        *dist++=*src++;
    }
    
    *dist='\0';
    
    
}
