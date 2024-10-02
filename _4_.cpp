#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double norm1(vector<double>& v, int n);
double norm2(vector<double>& v, int n);
double norm3(vector<double>& v, int n);

int main()
{
	// 1. declare a vector<double> variable to store the vector
	// and an integer variable to store the size of the vector
	vector<double> vector;
	int size;
	double a;
	int method;
	double norm;

	// 2. prompt the user to input the size of the vector
	std::cout << "What is your vector's size ?";
	std::cin >> size;

	// 3. prompt the user to input the vector elements
	//  use a loop to push_back the elements entered onto the vector
	for (int i = 0; i < size; i++)
	{
		std::cout << "coordonate " << i << "\t\t";
		std::cin >> a;
		vector.push_back(a);
	}

	// 4. prompt the user to input a norm for calculation (use an if else or switch)
	// you can use, for example, 0 for norm1, 1 for norm2 and 2 for norm3
		std::cout << "choose between 1,2-(Eulerian),3-(Uniform Method) for calculation method :";
		std::cin >> method;
		if (method != 1 and method != 2 and method != 3)
		{
			std::cout << "Stop joking around...try again";
			exit(0);
		}
		// Calculating the norm
		else if (method == 1)
		{
			norm = norm1(vector, size);
		}
		else if (method == 2)
		{
			norm = norm2(vector, size);
		}
		else if (method == 3)
		{
			norm = norm3(vector, size);
		}


	
		std::cout << "the norm is " << norm;
	// 5. depending on what is requested call the appropriate norm function
	// and output the result to the screen


	// 6. return 0;
		return 0;
}


double norm1(vector<double>& v, int n)
{
	double norm = 0.0;

	// 1. using a loop, compute and return the 1-norm
	// the math function for  | | is fabs()
	for (int i = 0; i < n; i++)
	{
		 norm += abs(v[i]);
	}
	return norm;
}


double norm2(vector<double>& v, int n)
{
	double norm = 0.0;
	// 1. using a loop, compute and return the 2-norm
	// the math function for square root is sqr
	for (int i = 0; i < n; i++)
	{
		norm += sqrt(abs(v[i])* abs(v[i]));
	}
	return norm;
}
	

double norm3(vector<double>& v, int n)
{
	double norm = 0.0;
	double max = abs(v[1]);
	// 1. using a loop, compute and return the 3-norm
	
	// you will need to use an if statement in the loop to compare
	// the absolute value of the current item with the current maximum 
	// and swap the current maximum if necessary. You can set the inital
	// maximum to 0.0 
	for (int i = 0; i < n; i++)
	{
		if (abs(v[i]) > max) 
		{
			max = abs(v[i]);
		}
	}
	norm = max;
	return norm;
}