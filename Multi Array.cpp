#include <iostream>

using namespace std;




int main()
{
    int rows=2 , cols=3;
    int matrix[rows][cols];
    
    cout<<"Populate the arrays"<<endl;
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            
            cout<<"Enter the value for Position ["<<i+1<<" ,"<<j+1<<"]: ";
            
            cin>>matrix[i][j];
            
        }
    } 
    //transposed printing
    
    for(int i=0; i<cols; i++){
        
        for(int j=0; j<rows; j++){
            
            cout<<matrix[j][i]<<"  ";
            
            
            
        }
        cout<<endl;
    } 
    
     
}
 
