#define _USE_MATH_DEFINES
using namespace std;

#include <iostream>
#include "Complex.h"
#include <cmath>



// 같같같같같같같같같�  Constructors 같같같같같같같같같같같같같같같

//Default constructor
Complex::Complex()
{
	_real = 0;
	_imaginary = 0;
}

//Private constructor
Complex::Complex(double r, double im)
{
	_real = r;
	_imaginary = im;
}

//Cartesian constructor
Complex Complex::FromCartesian(double r, double im)
{
	return Complex(r, im);
}

//Polar constructor
Complex Complex::FromPolar(double radius, double angle)
{
	return Complex(radius*cos(angle), radius*sin(angle));
}

//Copy-Constructor
Complex::Complex(const Complex& source)
{
	_real = source._real;
	_imaginary = source._imaginary;
}

//Destructor
Complex::~Complex(void)
{

}

// 같같같같같같같같같�  Getters & Setters 같같같같같같같같같같같같같같같
const double Complex::GetReal()
{
	return _real;
}
const double Complex::GetImaginary()
{
	return _imaginary;
}

const double Complex::GetRadius()
{
	return sqrt(_real*_real + _imaginary*_imaginary);
}
const double Complex::GetAngle()
{
	if ((_imaginary == 0) && (_real < 0)) {
		return M_PI;
	}
	else
	{
		return 2 * atan(_imaginary / (this->GetRadius() + _real));;
	}
}

void Complex::SetReal(double newReal)
{
	_real = newReal;
}

void Complex::SetImaginary(double newIm)
{
	_imaginary = newIm;
}

// 같같같같같같같같같�  += & -= operators 같같같같같같같같같같같같같같같
void Complex::operator += (const Complex& cToAdd)
{
	_real += cToAdd._real;
	_imaginary += cToAdd._imaginary;
}

void Complex::operator += (const double& dToAdd)
{
	_real += dToAdd;
}

void Complex::operator -= (const Complex& cToSubtract)
{
	_real -= cToSubtract._real;
	_imaginary -= cToSubtract._imaginary;
}

void Complex::operator -= (const double& dToSubtract)
{
	_real -= dToSubtract;
}
// 같같같같같같같같같�  += & -= operators 같같같같같같같같같같같같같같같

// 같같같같같같같같같� Display 같같같같같같같같같같같같같같같
void Complex::Display()
{
	cout << _real << " + " << _imaginary << "i" << endl;
}

// 같같같같같같같같같�  + & - operators 같같같같같같같같같같같같같같같
Complex operator + (const Complex& c1, const double& realToAdd)
{
	Complex result = Complex();
	result += c1;
	result += realToAdd;
	return result;
}

Complex operator + (const double& realToAdd, const Complex& c2)
{
	return c2 + realToAdd;
}


Complex operator + (const Complex& c1, const Complex& c2)
{
	Complex result = Complex(c1);
	result += c2;
	return result;
}

Complex operator - (const Complex& c1, const double& realToSubtract)
{
	Complex result = Complex(c1);
	result -= realToSubtract;
	return result;
}

Complex operator - (const double& realFirst, const Complex& c2)
{
	Complex result = Complex();
	result.SetReal(realFirst - result.GetReal());
	result.SetImaginary(-result.GetImaginary());
	return result;
}


Complex operator - (const Complex& c1, const Complex& c2)
{
	Complex result = Complex(c1);
	result -= c2;
	return result;
}