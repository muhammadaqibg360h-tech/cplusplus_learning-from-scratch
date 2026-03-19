#include <iostream>
#include <fstream>
#include <string>


using namespace std;
int main()
{
    ifstream file;
    char fileName[]="test file.cpp";
    const int maxchar=100;
    char completeLine[maxchar];
    
    file.open(fileName, ios::in);
    
    if(!file){
        cout<<"cannot open file";
        exit(1);
    } 
    while(file>>completeLine){
    
    file.getline(completeLine, maxchar);
    
    cout<<completeLine<<endl; 
}
    file.close();
    
}
