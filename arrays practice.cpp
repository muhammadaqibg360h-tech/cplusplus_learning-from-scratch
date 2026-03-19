#include <iostream>
using namespace std;

int main()
{
    int students;
    cout<<"how many students in the class:\t";
    cin>>students;
    
    int age[students], totalAge, averageAge;
   
    
    for(int i=1; i<=students; i++)
    {
        cout<<"enter the age of stundent "<<i<<":\t";
        cin>>age[i];
        
        totalAge+=age[i];
        
    }
    
    averageAge=totalAge/students;
    
    cout<<"the total No. of students in the class = "<<students<<endl;
    cout<<"sum of ages of All students = "<<totalAge<<endl;
    cout<<"Average Age of the class is = "<<averageAge;
    
}

