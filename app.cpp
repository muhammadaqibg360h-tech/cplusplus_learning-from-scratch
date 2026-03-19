#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(){
    
    
    string name;
    int sal;
    string dep;
    string header;
    
    ofstream outfile;
    ifstream file;
    
    file.open("hi.txt",ios::in);
    outfile.open("outfile.txt",ios::app);
    
    if(!file){
        cout<<"file cannot be opened";
        exit(1);
    }
    
    if(!outfile){
        cout<<"cannot open out file"<<endl;
    }
    
    getline(file, header);
    outfile<<header<<endl;
    outfile.put('c');
    while(file>>name>> sal>>dep)
    {
        
        outfile<<name<<'\t'<<sal<<'\t'<<dep<<endl;
    }
    file.close();
    outfile.close();
}


