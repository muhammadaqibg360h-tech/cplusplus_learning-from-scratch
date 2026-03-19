#include <iostream>


using namespace std;
main()
{
    long long upperLimit, number, fictorial;
    
    number=1;
    fictorial=1;
    
    //requesting user to input upper limut
    
    cout<<"please enter the number of which fictorial is required \t";
    
    cin>>upperLimit;
    
    number=upperLimit;
    
    while(number>1)
    {
        fictorial=fictorial*number;
        number=number-1;
    }
    
    cout<<"The Fictorial of the first "<<upperLimit<< " is =\t"<< fictorial;
      
      
}
