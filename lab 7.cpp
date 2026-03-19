#include <iostream>
using namespace std;
//functions declaration
int findMin(int [],int);
int findMax(int [],int);
int main() {
const int SIZE = 10; //size of array
//Array initialization
int number[10] = {
	21,25,89,83,67,81,52,100,147,10
};
//Displaying minimum and maximum number
cout<< "Maximum number in the array is :" <<findMax(number, SIZE) <<endl;
cout<< "Minimum number in the array is :" <<findMin(number, SIZE) <<endl;

return 0;
}
//Definition of findMin function
int findMin(int array[],int size){
	int min = 0;
	min = array[0];//Storing the value of the first element of array in 'min' variable
	
	for (int i = 0; i<size; i++){ //loop for traversing array 
		if(min > array[i])//Testing if the value of 'min' variable is greater than the current element of array
			min = array[i];//Storing the value of current element of array in 'min' variable
	}
return min;	//returning the minimum value of the array
}
//Definition of findMax function
int findMax(int array[],int size){
	int max = 0;
	
	max = array[0];//Storing the value of the first element of array in 'max' variable
	for (int i = 0; i<size; i++){//loop for traversing array
		if(max < array[i]) //Testing if the value of 'max' variable is less than the current element of array
		max = array[i];//Storing the value of current element of array in 'max' variable
	}
	return max; //returning the maximum value of the array
}

