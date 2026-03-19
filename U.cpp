#include <iostream>
using namespace std;


int main()
{
    int arr[]={1,8,5,4,7,2,3};
    int temp, i, j, y, swaps, size;
    int *xptr, *yptr;
    
    size=sizeof(arr)/sizeof(arr[0]);
    
    for (i=0; i<size; i++){
        swaps=0;
        
        for(j=0; j<size-1; j++){
            
            if(arr[j]<arr[j+1]){
                xptr=&arr[j];
                yptr=&arr[j+1];
                
                temp=*xptr;
                *xptr=*yptr;
                *yptr=temp;
                
                swaps++;
            }
        }
        
        for(j=0; j<size; j++){
            
            cout<<arr[j]<<'\t';
        }
        cout<<endl;
        
        if(swaps==0)
        break;
        
        
    }
    
    
    
    
    
}

