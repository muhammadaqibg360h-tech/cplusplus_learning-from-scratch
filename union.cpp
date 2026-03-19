#include <iostream>
using namespace std;
int main()
{
    
    union intOrchar{
        char c[4];
        int x;
        
    }ul;
    
    ul.x='a';
    cout<<"the value of c is = "<<ul.c[0]<<","<<ul.c[1]
        <<","<<ul.c[2]
        <<","<<ul.c[3]
        <<","<<ul.c[4]<<endl;
        
    cout<<"the value of x = "<<ul.x<<endl;
    ul.x*=256;
    ul.x+='b';
    cout<<"the value of c is = "<<ul.c[0]<<","<<ul.c[1]<<endl;
    ul.x*=256;
    ul.x+='c';
    cout<<"the value of c is = "<<ul.c[0]<<","<<ul.c[1]<<ul.c[2];
}
