#include <iostream>
#include <fstream>
using namespace std;
int main(){
    
    ifstream infile;
    infile.open("outtestt.txt",ios::in);
    
    infile.seekg(0,ios::end);
    long size=infile.tellg();
    
    cout<<size;
    
    
    
    
}
