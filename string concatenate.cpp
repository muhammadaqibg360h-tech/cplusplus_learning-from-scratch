#include <iostream>
#include <string.h>
using namespace std;

using namespace std;
int main(){
    
    char str1[30]="Welcome to ";
    char str2[30]="Virtual University";
    char str3[40]="";
    
    std::cout<<" the STring before concatenate   "<<str1<<endl;
    
    std::cout<<"the Str1         "<<str1<<endl;
    std::cout<<"the Str2         "<<str2<<endl<<endl;

    std::cout<<"the concatenate function calling"<<endl;
    
    strcat(str1,str2);
    
    
    std::cout<<"Now the S1 is   "<<str1<<endl;
    
    strncat(str3, str1, 7);
    
    std::cout<<str3;
    
    
}


