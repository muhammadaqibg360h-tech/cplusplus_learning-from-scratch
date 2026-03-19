#include <iostream>
using namespace std;




int main()
{
    int arr[]={8,5,1,6,4,3,2,7};          
    int temp;
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Array not sorted"<<endl;
    for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<"   ";
    }
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j+1],arr[j]);
            }
        }
    }
    
    
    
    
    cout<<endl<<"Array after sort"<<endl;
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"   ";
    }
    
    
}
