#include <iostream>
using namespace std;
int main()
{
    int sal, deduction, payable;
    sal=0;
    deduction=0;
    payable=0;
    
    cout<<"enter salaray: \t";
    cin>>sal;
    
    switch (sal/10000)
    {
        case 0:
            payable=sal;
            
            cout<<"your total salary is "<<sal<<endl;
            cout<<"The total deducttion is "<<deduction<<endl;
            cout<<"Your Total Payable are "<<payable;
            break;
        
        case 1:
            deduction=1000;
            payable=sal-deduction;
            cout<<"your total salary is "<<sal<<endl;
            cout<<"The total deducttion is "<<deduction<<endl;
            cout<<"Your Total Payable are "<<payable;
            break;
        
        default:
            
            deduction=(sal*7)/100;
            payable=sal-deduction;
            cout<<"your total salary is "<<sal<<endl;
            cout<<"The total deducttion of 7% is  "<<deduction<<endl;
            cout<<"Your Total Payable are "<<payable;
            
            
    }
    
    
    
}

