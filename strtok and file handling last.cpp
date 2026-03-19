#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main(){
    ifstream inFile;
    char inFileName[]="inFile1.txt";
    const int max_read=100;
    ofstream outFile;
    char outFileName[]="outFile2.txt";
    char completeLine[max_read];
    char *tokenptr;
    int salary=0;
    int totalSalary=0;
    
    inFile.open(inFileName, ios::in);
    outFile.open(outFileName, ios::out);
    
    if(!inFile){
        cout<<"\aInput file cannot open \n";
        exit(1);
    }
    if(!outFile){
        cout<<"\aout file cannot be open";
    }
    
    while(!inFile.eof()){
        
        inFile.getline(completeLine, max_read);
        tokenptr=strtok(completeLine," ");
        tokenptr=strtok(NULL," ");
        
        salary=atoi(tokenptr);
        totalSalary+=salary;       
    }
    
    outFile<<"the Total Salary is yes that is correct  "<<totalSalary;
    
    
    inFile.close();
    outFile.close();
    
    
    
}


