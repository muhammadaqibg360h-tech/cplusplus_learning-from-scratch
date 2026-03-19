#include <iostream>
using namespace std;
int main (){
    
    int x=10;
    
    int *yptr;
    
    yptr=&x;
    
    
    cout<<" this is the address of x                                     "<<yptr<<endl;
    cout<<"this is the content in the that address holding by the yptr   "<<*yptr<<endl;
    
    (*yptr)++;
    
    
    cout<<"this the value of x using (*yptr)++                           "<<*yptr<<endl;
    
    cout<<"this is the value of x see whether the value is changed      "<<x<<endl;   
    
    *yptr+=3;
    
    cout<<"this is the value after incrementing using *yptr +=3        "<<*yptr<<endl;     
    
    
    
    
}
