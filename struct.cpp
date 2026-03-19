#include <iostream>
using namespace std;
int main(){
    
    struct student{
        char name[20];
        float gpa;
        char course[20];
        int age;
        
    };
    int totalStudents=3;
    float totalGpa, maxGpa, averageGpa;
    int totalAge, averageAge;
    int index;
    student s[totalStudents];
    
    for(int i=0; i<totalStudents; i++){
        cout<<"enter the name of Student "<<i+1<<"  ";
        cin.getline(s[i].name,20); 
        cout<<"enter the GPA of Student "<<i+1<<"  ";
        cin>>s[i].gpa;
        cin.ignore();
        
        cout<<"enter the Course of Student "<<i+1<<"  ";
        cin.getline(s[i].course,20);
        cout<<"enter the age of Student "<<i+1<<"  ";
        cin>>s[i].age;
        cin.ignore();
        cout<<endl;
    }
    
    for(int i=0; i<totalStudents; i++){
        
        totalAge=totalAge+s[i].age;
        totalGpa=totalGpa+s[i].gpa;
        if(maxGpa<s[i].gpa){
            maxGpa=s[i].gpa;
            index=i;
        }
        
    }
    
    averageGpa=totalGpa/totalStudents;
    averageAge=totalAge/totalStudents;
    
    
    cout<<"Average Age of  the class is   "<<averageAge<<endl;
    cout<<"Average GPA of the class is   "<< averageGpa<<endl;
    cout<<"the highest GPA in the class is belongs to  "<<s[index].name<<endl;
    cout<<endl;
    
    
    
    
    if(averageGpa>4){
        cout<<"the GPA is invalid"<<endl;
        
    }
    else if(averageGpa>=4){
        cout<<"the Grade of the class is  A"<<endl;
        
    }
     else if(averageGpa>=3){
        cout<<"the Grade of the class is  B"<<endl;
        
    }
    else if(averageGpa>=2){
        cout<<"the Grade of the class is  c"<<endl;
        
    }
    
    else{
        cout<<"very Bad";
    }
    
    
}
