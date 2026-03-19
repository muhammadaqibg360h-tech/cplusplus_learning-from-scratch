#include <iostream>
using namespace std;
int main ()
{
    int multi[5][10];
    int *ptr;
    ptr=*multi;
    int k=1;
    for(int i=0; i<5; i++){
        
        for(int j=0; j<10; j++){
            multi[i][j]=k++;
        }
        
      cout<<endl;
        
    }
    
    for(int i=0; i<5; i++){
        
        for(int j=0; j<10; j++){
            cout<<multi[i][j]<<'\t';
        }
        
        cout<<endl;
    }
    cout<<"array using multi pointer"<<endl<<endl;
    
    cout<<*(*(multi+2)+3);


    /*for(int i=0; i<5; i++){
        
        for(int j=0; j<10; j++){
            cout<<*(ptr++)<<'\t';
        }
        
        
    }*/
    
}
