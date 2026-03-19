#include <iostream>
using namespace std;
const int arraySize = 4; // intializing constant variable with value 4
void readMatrix(int arr[][arraySize]);	// prototype of a function that takes input values from the user and will store it into the array.
void displayMatrix(int a[][arraySize]);	 // prototype/signature of the function to display array values
void transposeMatrix(int a[][arraySize]);  // protype of a function that will change rows into columns and columns into rows.

main(){
	// Declaring a multi-dimensional array
	int a[arraySize][arraySize];  
	// Taking input from user
	readMatrix(a); 	// Call by value of a function to store input values in the array.
	
	// Display the matrix
	cout << "\n\n" << "The original matrix is: " << '\n';
	displayMatrix(a);   // Calling a function that is written to display array values from a multi-dimensional array.
	
	//Taking Transpose of a matrix
	transposeMatrix(a);	//Calling a function that will return swapped value at the end.
	
	//Display the transposed matrix
	cout << "\n\n" << "The transposed matrix is: " << '\n';
	displayMatrix(a);	// Calling a function that is written to display array values from a multi-dimensional array. This time it will show swapped values.
}	
// Defining a readMatrix() function, in which we are using nested for loop to build a multi-dimensional matrix.
void readMatrix(int arr[arraySize][arraySize]){  
	int row, col;
	for (row = 0; row < arraySize; row ++){
		for(col=0; col < arraySize; col ++){
			cout << "\n" << "Enter " << row << ", " << col << " element: ";
			cin >> arr[row][col];
		}
	cout << '\n';
	}
}
// Defining  displayMatrix() function, that will traverse through the whole array and will display array elements.
void displayMatrix(int a[][arraySize]){     
	int row, col;
	for (row = 0; row < arraySize; row ++){
		for(col = 0; col < arraySize; col ++){
			cout << a[row][col] << '\t';
		}
	cout << '\n';
	}
}
// A function that is swapping whole rows into columns and columns into arrays.
void transposeMatrix(int a[][arraySize]){   
	int row, col;
	int temp;
	for (row = 0; row < arraySize; row ++){
		for (col = row; col < arraySize; col ++){
			/* Interchange the values here using the swapping mechanism */
			temp = a[row][col]; // Save the original value in the temp variable
			a[row][col] = a[col][row];
			a[col][row] = temp; //Take out the original value
		}
	}
}

