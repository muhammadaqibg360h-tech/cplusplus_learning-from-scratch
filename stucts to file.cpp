#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <stdlib.h>
using namespace std;

ifstream infile;
ofstream outfile;


struct student{
    char name[30];
    char course [30];
    int age;
    float gpa;
};

void openfile();
student getData();
void writeData(student);

int main(){
    
    const int noOfStudents=3;
    openfile();
    student students[noOfStudents];
    
    for(int i=0; i<noOfStudents; i++){
       if(!infile.eof()){
           students[i]=getData();
           
       }
       else{
           break;
       }   
        
    }
    
    for(int i=0; i<noOfStudents; i++){
        writeData(students[i]);
        outfile<<'\n';
    }
    
    infile.close();
    outfile.close();
      
}

void openfile(){
    infile.open("read.txt",ios::in);
    infile.seekg(0,ios::beg);
    outfile.open("written.txt",ios::app);
    outfile.seekp(0,ios::end);
     if(!infile){
         cout<<"infile cannot opened";
         exit(1);
     }
     if(!outfile){
         cout<<"outfile cannot opened";
         exit(1);
     }
}

student getData(){
    student tempStudent;
    char tempAge[3];
    char tempGpa[3];
    infile.getline(tempStudent.name,20,'\n');
    infile.getline(tempStudent.course,20,'\n');
    infile.getline(tempAge,3,'\n');
    infile.getline(tempGpa,3,'\n');
    
    tempStudent.age=atoi(tempAge);
    tempStudent.gpa=atof(tempGpa);
    
    return tempStudent;
}

void writeData(student writeStudent){
    
    outfile<<writeStudent.name<<'\n';
    outfile<<writeStudent.course<<'\n';
    outfile<<writeStudent.age<<'\n';
    outfile<<writeStudent.gpa<<'\n';
}





























