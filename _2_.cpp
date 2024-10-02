// #Author : A.D
//#Date : 02/10/2024


#include <iostream>
#include <cmath>
#include <vector>
#include <stdio.h>

using namespace std;


double gauss(double x);

int main_2_()
{
	// 1. declare two vector<double> variables to store the values for x and y
	// you can use either vector<double> v_x, v_y and then use push_back to put
	// the values in OR you can declare vector<double> v_x(11), v_y(11) and then
	// use the [i] in the loop below to assign the values
	vector<double> v_x(11);
	vector<double> v_y(11);


	// 2. write a loop to fill the v_x vector with the values 0.0, 0.1, 0.2, ... 1.0
	//    and the v_y vector with the result of calling the gauss function on the v_x values
	for (int i = 0; i < 11; i++)
	{
		v_x[i] = (double)i/10;
		v_y[i] = gauss(v_x[i]);

	}

	// 3. print out the results as indicated using cout and "\t" (tab) as many times
	// as required to tab the output and obtain the required table form
	std::cout << "Here are the results to the gaussian operations";
		for (int i =0 ; i< 11 ; i++)
		{
			std::cout << "\n" << "x" << "\t\t" << v_x[i] << "\t\t" << "y" << "\t\t" << v_y[i] << "\n";
		}
	
	// 4. return 0
		return 0;

}


double gauss(double x)
{
	// 1. compute and return the value of the Gaussian density function
	// the math function for exp is called exp
	// the math function for pi is obtained by computing 4.0*atan(1.0)
	double value = 0.5*1/(4.0 * atan(1.0))*exp(x*x/2);
	return value;
	
}