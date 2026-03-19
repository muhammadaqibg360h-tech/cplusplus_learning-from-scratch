#include <iostream>
using namespace std;
int main()
{
    int y[10];
    int *yptr;
    yptr=y;
    
    cout<<" printing the memory address of y ptr       "<< yptr;
    
    yptr=&y[2];
    
    cout<<endl<<"printing the memmory address after incrementing the yptr    "<<*yptr;
    
    
}

