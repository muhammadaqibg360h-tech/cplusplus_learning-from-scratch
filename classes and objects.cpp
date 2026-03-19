#include <iostream>
#include<string.h>
using namespace std;

class student{
    public:
    string name;
    double gpa;
    int ID;
    
};


int main(){
    student std1, std2, std3;
    
    std1.name="Muhammad Aqib";
    std1.ID=1234;
    std1.gpa=3.5;
    
    std::cout<<std1.name;
    

    

}


