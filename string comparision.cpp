#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char str1[]="Welcome";
    char str2[20]="";
    
    cout<<str1<<endl;
    cout<<"input the above to compare";
    cin>>str2;
    
    
    cout<<strlen(str1);
    
    
    if((strcmp(str1, str2))==0){
        
        cout<<"       the string are same";
    }
    
    
    
    
    
}
