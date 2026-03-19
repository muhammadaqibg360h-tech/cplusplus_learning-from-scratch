#include <iostream>
using namespace std;
int main()
{
    char Ascii[256]={0};
    for(int i=0; i<=256; i++)
    {
     Ascii[i]=i;
    }
    
    for(int i=0; i<=256; i++)
    {
        cout<<Ascii[i]<<" ASCII Number is "<<i<<endl;
    }
    
}

