#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(){
    
    ifstream infile;
    char c;
   
    
    
    infile.open("inm.txt", ios::in);
   if(!infile){
       cout<<"cannot";
   }
   
   infile.seekg(0L, ios::beg);
   infile.get(c);
   cout<<c;
    

    
}
