#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
int main(){
    
    char Str1[15]="String 1";
    char Str2[15]="string 2";
    char Str3[15]="aqib";
    cout<<"Before string copy function"<<endl<<endl;
    std::cout<<"this is Sting1                      "<<Str1<<endl;
    std:: cout<<"this is String2                      "<<Str2<<endl;
    
    
    strcpy(Str1,Str2);
    std::cout<<endl<<"These are the strings after copied from S1 to S2"<<endl<<endl;
    
    std::cout<<"this is Sting1                      "<<Str1<<endl;
    std:: cout<<"this is String2                      "<<Str2<<endl;
    
    
    std::cout<<endl<<"this is copying the n character into string"<<endl;
    strncpy(Str3,Str2,3);
    std::cout<<"this is Sting3  n copied               "<<Str3<<endl;
    
    
    
    
    
}


