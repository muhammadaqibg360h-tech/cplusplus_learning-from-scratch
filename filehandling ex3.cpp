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
    char *token2;
    char *token3;
    
    
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
     
    while(infile.getline(firstname,20)){
        //infile.getline(firstname,20);
        strncpy(pass,firstname,4);
        pass[4]='\0';
        token=strtok(firstname," ");
        token2=strtok(NULL," ");
        token3=strtok(NULL," ");
        outf<<token<<"  "<<token2<<token3<<"  "<<pass<<'\n';
    }
    
    outf.close();
    infile.close();
    
}
