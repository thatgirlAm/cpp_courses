#include <iostream>
#include <complex>
#include <iomanip>
using namespace std;

complex<double> freq_response(double w);

int main_3_()
{
	// 1. use cout to print the text of the first three lines of the table
	// you can use tabs ("\t\t..") to separate Frequency, Real part, Imaginary part, Magnitude
	std::cout << "Frequency response function for feed  back system";
	std::cout << "*************************************************";
	std::cout << "Frequency" << "\t\t\t" << "Real part " << "\t\t\t" << "Imagimary part" << "\t\t\t" << "Magnitude" ;

	// 2. use a loop to output the table results printing the frequency, real part,
	// imaginary part and magnitude. You can obtain the real part by calling real(c)
	// on a complex number c, the imaginary part by calling imag(c) and the magnitude 
	// by calling abs(c).
	for (int i = 1; i <= 10; i++)
	{
		
		std::cout << "\n" << (double)i << "\t\t\t" << real(freq_response(i * 2 * (4.0 * atan(1.0)))) << "\t\t\t" << imag(freq_response(i * 2 * (4.0 * atan(1.0)))) << "\t\t\t" << abs(freq_response(i * 2 * (4.0 * atan(1.0))));
		
	}

	// you can set the precision (how many spaces for the numbers) of the output by 
	// writing cout << set_precision(6) (this will set 6 spaces for the numbers) 
	//coutset_precision(6)


	// 3. return 0;
	return 0;
}



complex<double> freq_response(double w)
{
	double imaginary;
	double real;

	// 1. declare a complex number object for each of the complex numbers
	// a complex number u+iv is represented as complex<double>(u,v)
	// for example for the complex number 200i we would write
	// complex<double> a = complex<double>(0.0,200.0)

	complex<double> a= complex<double>(0.0, 200.0);
	complex<double> b= complex<double>(2.0, w);
	complex<double> c= complex<double>(w, 0.0);
	complex<double> d= complex<double>(1.0, 0.1*w);
	complex<double> e= complex<double>(1.0, 0.3*w);
	complex<double> f= complex<double>(1.0, 0.6 * w);
	complex<double> g= complex<double>(1.0, 0.8 * w);
	


	// 2. Compute the complex number G. You can multiply the complex numbers by 
	// using * and you can divide complex numbers by using /
	complex<double> solution = a * b / (w * w * w * c * d * e * f * g);

	// 3. return the complex number G
	return solution; 
}