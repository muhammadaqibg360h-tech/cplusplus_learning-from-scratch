#include <iostream>
using namespace std;
main()
{
    int number, sum, getNum;
    number=0;
    sum=0;
    //prompt to user to input the number upto which addition is required
    
    cout<<"input the number upto which addition is required: \t";
    
    cin>>getNum;
    
    while (number<=getNum)
    {
        sum=sum+number;
        
        number+=1;
        
    }
    
    cout<<"sum of the first: "<<getNum<<" =\t"<<sum;
    
    
}
