#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(){
    
    ifstream infile;
    ofstream outf;
    char firstname[20];
    char login[20];
    char pass[20];
    char*token;
    
    
    
    
    infile.open("inm.txt", ios::in);
    outf.open("newfile.txt",ios::out);
    
    if(!infile){
        cout<<"\acannot open in file"<<endl;
        exit(1);
    }
    if(!outf){
        cout<<"\acannot open out file"<<endl;
        exit(1);
    }
     
    while(!infile.eof()){
        infile.getline(firstname,20);
        outf<<firstname<<'\n';
    }
    
    outf.close();
    infile.close();
    
}
