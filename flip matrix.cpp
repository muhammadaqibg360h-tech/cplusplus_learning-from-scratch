#include <iostream>
using namespace std;

 const int size=3;
 
 void read(int arr[size][size]){
     int rows,cols;
     for(rows=0; rows<size; rows++){
         cout<<endl;
         for(cols=0; cols<size; cols++){
             cout<<"enter "<<rows<<" , "<<cols<<"   ";
             cin>>arr[rows][cols];
         }
     }
 }
 void display(int arr[size][size]){
     int rows,cols;
     for(rows=0; rows<size; rows++){
         for(cols=0; cols<size; cols++){
             cout<<"   "<<arr[rows][cols];
         }
         
         cout<<endl;
     }
 }
 
 void flipedArray(int arr[size][size]){
    int rows,cols,temp;
    for(rows=0; rows<size; rows++){
        for(cols=rows; cols<size; cols++){
            temp=arr[rows][cols];
            arr[rows][cols]=arr[cols][rows];
            arr[cols][rows]=temp;
        }
    }

    
 }

int main(){
    
    
    int mtx[size][size];
    read(mtx);
    display(mtx);
    flipedArray(mtx);
    
    cout<<"transposed"<<endl<<endl;
    
    display(mtx);
    
}

