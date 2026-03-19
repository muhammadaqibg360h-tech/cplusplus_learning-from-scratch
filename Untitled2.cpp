#include<iostream>
using namespace std;

void swap(int *x, int *y);

int main(){
    int x [] = {1,3,5,7,9,2,10,6,8,4};
    int i, j, temp, swaps;
  
    for(i=0; i<10; i++)
    {
        
        swaps=0;
        for(j=0; j<10; j++)
        {
            if(x[j]>x[j+1])
            {
                swaps++;
                swap(&x[j], &x[j+1]);
            }
        }
        
        for(j=0; j<10; j++)
        cout<<x[j]<<'\t';
        cout<<endl;
        if(swaps==0)
        break;
    }   
}

void swap(int *x, int *y){
    
    int tmp;
    
    if (*x>*y){
        
        tmp=*x;
        *x=*y;
        *y=tmp;
    }
}

