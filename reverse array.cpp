#include <iostream>
using namespace std;

void reverse(int arr[],int n){
    
    int start=0;
    int end=n-1;
    
    while (start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}


main(){
    
    int apn[10];
    int n=sizeof(apn)/sizeof(apn[0]);
    
    cout<<"enter the array:  ";
    
    for(int i=0; i<n; i++){
        cin>>apn[i];
    }
    
    reverse(apn, n);
    
    cout<<"array after calling the function";
    
    for(int i=0; i<n; i++){
        cout<<apn[i]<<"  ";
    }
    
    
}
