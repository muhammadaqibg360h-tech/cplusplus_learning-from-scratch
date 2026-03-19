#include <iostream>
using namespace std;

double raisToPow(int number, int power);

int main()
{
    
  int x,n; double result;  
  cout<<"input the number:  ";
  cin>>x;
  
  cout<<"raise to the power:  ";
  cin>>n;
  
  result=raisToPow(x,n);
  cout<<"the result of the number "<<x<<" raise to the power to "<<n<<" = "<<result;
  
  
}
double raisToPow(int number, int power)
{
    int result;
    result=1;
    
    for (int i=1; i<=power; i++)
    {
        result=result*number;
    }
    
    return result;
}

