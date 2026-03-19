#include<iostream>
#include<string.h>

using namespace std;


int main(){
    
    char s1[]="welcome to ";
    char s2[]="Virtual University";
    char s3[]= "welcome to karachi    ";
    
    char city[]="Karachi";
    char province[]="Sindh";
    char s[80];
    
    char *pc;
    int n;
    cout<<"S1 =  "<<s1<<endl<<"s2 =  "<<s2<<endl<<"s3=    "<<s3;
    cout<<"the length of S1 is "<<strlen(s1)<<endl;
    cout<<"the length of S2 is "<<strlen(s2)<<endl;
    cout<<"the length of S3 is "<<strlen(s3)<<endl;
    
    strcpy(s, "Hyderabad");
    
    cout<<"the nearest city to "<<city<<" is "<<s<<endl;
    
    strcpy(s, " and ");
    
    strcpy(s, city);
    strcpy(s, " are in ");
    strcpy(s,province);
    
    cout<<s<<endl;
    
    if(!(strcmp(s1, s2))){
        cout<<"the strings are same"<<endl;
        
    }
    else{
        cout<<"the strings are not the same"<<endl;
    }
    
    if(!(strncmp(s1,s3,7))){
        
        cout<<"the first 7 character are the same"<<endl;
        
    }
    else{
        cout<<"the first 7 char are not identical";
    }
    
    
    
}
