#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double norm1(vector<vector<double>>& mat, int nrows);
double norm2(vector<vector<double>>& mat, int nrows);
double norm3(vector<vector<double>>& mat, int nrows);

int main()
{
	// 1. declare an integer variable to store the size of the matrix
	int size; 
	
	// 2. prompt the user to input the size of the matrix
	std::cout << "What is your matrix's size ?";
	std::cin >> size;

	// 3. declare a vector<vector<double>> variable called mat as
	vector<vector<double>> mat = vector<vector<double>>(size);

	// 4. declare a double variable for a matrix element, say double elem;
	double  elem; 

	// 5. prompt the user to input the matrix elements
	// use a double loop to push_back the elements entered onto the matrix
	// if the matrix is called mat we can write
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++) 
		{
			 mat[i].push_back(elem);
		}
	}

	// 6. prompt the user to input a norm for calculation
	// you can use, for example, 0 for norm1, 1 for norm2 and 2 for norm3

	// 7. depending on what is requested call the appropriate norm function
	// and output the result to the screen


	// 8. return 0;
}


double norm1(vector<vector<double>>& mat, int size)
{
	// 1. using a double loop, compute and return the 1-norm
	
	// the math function for  | | is fabs()
	
	// for the 1-norm we have to sum up the absolute values of the elements
	// from each column of the matrix. This will give us a vector of values
	// where, for example, the first element will be the sum of the 
	// absolute value of the elements of the first column of the matrix, and so on.
	
	// Then we have to find the maximum value of this vector
}


double norm2(vector<vector<double>>& mat, int size)
{
	// 1. using a double loop, compute and return the 2-norm

	// the math function for square root is sqr
	
	// for the 2-norm we have to sum up the square of the values 
	// of all the elemnst in the matrix and then return the square root
	// of this value.
}


double norm3(vector<vector<double>>& mat, int size)
{
	// 1. using a double loop, compute and return the 3-norm
	
	// the math function for  | | is fabs()
	
	// for the 3-norm we have to sum up the absolute values of the elements
	// from each row of the matrix. This will give us a vector of values
	// where, for example, the first element will be the sum of the 
	// absolute value of the elements of the first row of the matrix, and so on.

	// Then we have to find the maximum value of this vector
}