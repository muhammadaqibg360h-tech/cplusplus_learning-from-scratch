#include <iostream>
using namespace std;

int findMax(int arr[],int);
int findMin(int arr[],int size);

int minIndex(int arr[], int size); //this func finds the index of Minimum number in the array
int maxIndex(int arr[],int size); //this function finds the index of Mximum Number in the array

int main(){
    
    int array[]={10,60,9, 40};
    int size=sizeof(array)/sizeof(array[0]);
    int minId=minIndex(array,size);
    int maxId=maxIndex(array,size);
    
    //Minumun number
    cout<<"Minimum Number is in the array is; "<< findMin(array,size)<<endl;
    //Find maximum;
    
    cout<<"Maximum Number in the array is:  "<<findMax(array,size)<<endl; 
    
    //display the whole array
    cout<<"array before swaping max and Min"<<endl;
    for (int i=0; i<size; i++){
        
        cout<<array[i]<<"  ";
    }
    
    cout<<endl<<"arrays after swaping the Min and Max"<<endl;
    
    swap(array[minId],array[maxId]);
    
    for (int i=0; i<size; i++){
        
        cout<<array[i]<<"  ";
    }
    
    
    
}


int findMax(int arr[],int size){
    int max=arr[0];
    
    for(int i=0; i<size; i++){
        
        if(max < arr[i]){
            max=arr[i];
            
            
        }  
    }
    return max;
}

int findMin(int arr[],int size){
    int min=arr[0];
    
    for(int i=0; i<size; i++){
        
        if(min> arr[i]){
            min=arr[i];
            
        }  
    }
    return min;
}


int minIndex(int arr[],int size){
    int min=arr[0];
    int minIndex=0;
    
    for(int i=0; i<size; i++){
        
        if(min> arr[i]){
            min=arr[i];
            minIndex=i;
        }  
    }
    return minIndex;
}

int maxIndex(int arr[],int size){
    int max=arr[0];
    int maxIndex=0;
    for(int i=0; i<size; i++){
        
        if(max < arr[i]){
            max=arr[i];
            maxIndex=i;
            
        }  
    }
    return maxIndex;
}
