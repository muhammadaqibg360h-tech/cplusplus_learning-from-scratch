#include <iostream>

using namespace std;

void swap(int *val, int *val2);
int main(){
    int array[]={1,8,5,4,2,3,6,9,7};
    int i, j, temp, swaps;
    
    cout<<"this is the array without swaping"<<endl;
    cout<<"[";
    for(i=0; i<9; i++){
        cout<<array[i]<<"   ";
    }
    cout<<"]"<<endl;
    
    
    for(i=0; i<9; i++){
        
        swaps=0;
        
        for(j=0; j<9; j++){
            
            if(array[j]>array[j+1]){
                
                swaps++;
                
               swap(&array[j], &array[j+1]);
            }
            
        }
        for(i=0; i<9; i++){
        
        cout<<array[i]<<"   ";
        cout<<endl;
        if(swaps==0){
            break;
        }
    }
    }
    
    cout<<"this is the array after swaping"<<endl;
    
    
    
    
    
    
    
}

void swap(int *val, int *val2){
    
    int temp;
    
    if(*val > *val2){
    
    temp=*val;
    *val=*val2;
    *val2=temp;
}
}

