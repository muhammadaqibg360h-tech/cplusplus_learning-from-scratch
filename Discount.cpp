#include <iostream>
using namespace std;
main()
{
    double TotalAmount, Discount, netPayable;
   
    //prompt to user to enter the total amount
   
   cout<<"Please Enter the Total Amount;\t";
   
   cin>>TotalAmount;
   
   if(TotalAmount>5000)
    {
        Discount=(TotalAmount*15)/100;
        
        netPayable=TotalAmount-Discount;
        
        cout<<endl<<"Your Total Bill was:\t"<<TotalAmount<<endl<<endl;
        
        cout<<"Discount applied @ 15% is:\t"<<Discount<<endl<<endl;
        
        cout<<"The Net Payable Amount is;\t"<<netPayable<<"\n\n Thanks for Shoping with us,\n See You again....";
    }
       
     else
     {
        Discount=(TotalAmount*10)/100;
        
        netPayable=TotalAmount-Discount;
        
        cout<<endl<<"Your Total Bill was:\t"<<TotalAmount<<endl<<endl;
        
        cout<<"Discount applied @ 10% is:\t"<<Discount<<endl<<endl;
        
        cout<<"The Net Payable Amount is;\t"<<netPayable<<"\n \n Thanks for Shoping with us,\n See You again....";
     }
    
    
    
    
    
    
}
