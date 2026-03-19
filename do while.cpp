#include <iostream>
#include <string.h>
#include <limits>
using namespace std;
int main()
{
    int tries=0;
    int password=0;
    
    string name;
    float cgpa=0;
    
    cout<<"please enter the password, Note that your account will get lock after\n five incorrect passwords";
    
    cout<<endl<<"Password......\t";
    
    cin>>password;
    do
    {
        
        if(password==1234)
        {
            
            cout<<"welcome..\n"<<endl;
            
            cout<<"please input your name\t";
            cin.ignore(100, '\n');
            getline(cin,name);
            
            
            cout<<endl<<"inupt your cgpa\t";
            
            cin>>cgpa;
            
            while(cgpa<1 || cgpa>4)
            {
                cout<<"invalid CGPA ";
                cin>>cgpa;
            }
            
            if(cgpa>=3.5)
            {
                cout<<"Congratulations";
                break;
            }
            else
            {
                cout<<"You are not eligible";
                break;
            }
            
        }
        else
        {
            cout<<"please input the correct password:\t";
            cin>>password;
            tries+=1;
        }
    }
    while(tries<4);
if(tries==4)cout<<"your account has been lock";
}
