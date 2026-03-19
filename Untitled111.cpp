#include <iostream>
#include <fstream>

using namespace std;
int main(){
    
    int i;
    float f;
    char c;
   
    ifstream infile;
    
    infile.open("outtestt.txt",ios::out);
    
    if(!infile){
        cout<<"cannot open the intest file";
        exit(1);
        
    }
    
    
    
    infile>>i;
    infile>>f;
    infile>>c;
    
    cout<<i<<" "<<f<<" "<<c;
    
    infile.close();
    
    
}
