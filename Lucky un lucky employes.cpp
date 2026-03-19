//input
//salary calculations
//








#identification of unlucky
//output

#include <iostream>
using namespace std;

void getinput(double sal[][2], int numEmps);
void calNetSal(double sal[][2], int numEmps);
//void findunlukies(double sal[][2], int numEmpsm, int luky);
//void printUnluckies(int lucky[], int numEmps);
 

int main(){
    
    const int size=100;
    double sal[size][2];
    int lucky[]={0};
    int numEmps;
    cout<<"please input the number of employes:    ";
    cin>>numEmps;
    cout<<endl<<endl;
    
    getinput(sal, numEmps);   
    
    cout<<endl<<endl<<"Calculating net Salary of the employees";
    calNetSal(sal,numEmps);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}

void getinput(double sal[][2], int numEmps){
    for(int i=0; i<numEmps; i++){
        cout<<"please input the Gross salary of the employee No. "<<i<<"   ";
        cin>>sal[i][0];
    }
}
void calNetSal(double sal[][2], int numEmps){
    for(int i=0; i<numEmps; i++){
        if(sal[i][0]>0 && sal[i][0]<=5000){
            sal[i][1]=sal[i][0];
        }
        else if(sal[i][0]>=5001 && sal[i][0]<=10000){
            sal[i][1]=sal[i][0]-(0.05*sal[i][0]);   
        }
        
        else if(sal[i][0]>=10001 && sal[i][0]<=20000){
            sal[i][1]=sal[i][0]-(0.1*sal[i][0]);
        }
        else if(sal[i][0]>=20001){
            sal[i][1]=sal[i][0]-(0.15*sal[i][0]);
        }
        else{
            
        }
    }    
 }


