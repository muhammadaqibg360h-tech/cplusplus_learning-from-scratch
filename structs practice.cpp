#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

struct student{
    char name[30];
    char course[30];
    int age;
    float gpa;
};
    ifstream infile;
    ofstream outfile;
    
void openfile(char in[], char out[]){
    
    infile.open(in,ios::in);
    infile.seekg(0,ios::beg);
    outfile.open(out,ios::app);
    outfile.seekp(0,ios::end);   
}

void closefile(){
    infile.close();
    outfile.close();
}

student getData(){
    student tempstudent;
    char tempGpa[10];
    char tempAge[10];
    infile.getline(tempstudent.name,30,'\n');
    infile.getline(tempstudent.course,30,'\n');
    infile.getline(tempGpa,10,'\n');
    tempstudent.gpa=atof(tempGpa);
    infile.getline(tempAge,10,'\n');
    tempstudent.age=atoi(tempAge);  
    return tempstudent;
}
void writefile(student write){
    outfile<<write.name<<'\t'<<write.course<<'\t'<<write.age<<'\t'<<write.gpa;
    outfile<<endl;
}


int main(){
    int totalStudents=3;
    student s[totalStudents];
    char read[]="read.txt";
    char write[]="write.txt";
    openfile(read,write);
    
    for(int i=0; i<totalStudents; i++){
        s[i]=getData();
    }
    
    outfile<<"S No."<<'\t'
           <<"Name"<<'\t'
           <<"course"<<'\t'
           <<"age"<<'\t'
           <<"gpa"<<time()
           <<'\n'<<'\n';
    for(int i=0; i<totalStudents; i++){
        outfile<<i+1<<'\t';
        writefile(s[i]);
        outfile<<endl;
    }
    
    
    
    
    closefile();
    
}



