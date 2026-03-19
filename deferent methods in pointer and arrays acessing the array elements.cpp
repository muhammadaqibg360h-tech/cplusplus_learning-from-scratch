#include <iostream>
using namespace std;

int main(){
    
    int y[10]={1,2,8,4,6,8,2,9};
    
    int *yptr;
    
    yptr=y;
    
    cout<<"this the 6 element of array using accessing the array element using y[5]=      "<<y[5]<<endl<<endl;
    cout<<"this is the 6 element using *(yptr+5)=                                         "<<*(yptr+5)<<endl<<endl;
    cout<<"this is the 6 element using yptr[5]                                            "<<yptr[5]<<endl<<endl<<endl<<endl;
    
    for(int i=0; i<8; i++){
        
        cout<<"the value at location no "<<i<< " = "<<yptr[i]<<endl<<endl;
        yptr++;
    }
    
    
}

