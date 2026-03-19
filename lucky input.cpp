#include <iostream>
using namespace std;

void getInput(double sal[][2], int numEmps);
void cal(double sal[][2], int numEmps);
void findunlucky(double sal[][2], int numEmps,int lucky[]);
void markunlucky(double sal[][2], int numEmps, int upperbound, int luck[], int empNbr);
void printUnluck(int lucky[], int numEmps);

int main(){
    
    const int size=100;
    double sal[size][2];
    int lucky[100]={0};
    int numEmps;
    
    cout<<"how many emplyees in the company    ";
    cin>>numEmps;
    cout<<endl<<endl;
    getInput(sal,numEmps);
    
    cout<<"calculating Salires"<<endl;
    
    cal(sal,numEmps);
    
    cout<<"\n \n locating unlucky employees";
    
    findunlucky(sal,numEmps,lucky);
    
    cout<<"\n unlucky emplyees"<<endl;
    
    printUnluck(lucky,numEmps);
    
}


void findunlucky(double sal[][2], int numEmps, int lucky[]){
    
    for(int i=0; i<numEmps; i++){
        if(sal[i][0]>=0 && sal[i][0]<=5000){
            
        }
        else if(sal[i][0]>=5001 && sal[i][0]<=10000){
            markunlucky(sal,numEmps,5001, lucky,i);
        }
         else if(sal[i][0]>=10001 && sal[i][0]<=20000){
            markunlucky(sal,numEmps,10001,lucky,i);
        }
        else if(sal[i][0]>=20001){
            markunlucky(sal,numEmps,20001,lucky,i);
        }
    }  
}
 void markunlucky(double sal[][2], int numEmps, int upperbound,int lucky[], int empNbr) {
     for(int i=0; i<numEmps; i++){
         if(sal[i][0]<upperbound && sal[i][0]<sal[empNbr][1]){
             lucky[empNbr]=1;
             break;
         }
     }
 }  
void cal(double sal[][2], int numEmps){
    
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
        
    }
}

void getInput(double sal[][2], int numEmps){
    for(int i=0; i<numEmps; i++){
        
        cout<<"Enter the salary of Eployee No. "<<i<<"    ";
        cin>>sal[i][0];
    }
} 

void printUnluck(int lucky[], int numEmps){
    for(int i=0; i<numEmps; i++){
        if(lucky[i]==1){
            cout<<"\n Emply No. "<<i;
        }
    }
}
