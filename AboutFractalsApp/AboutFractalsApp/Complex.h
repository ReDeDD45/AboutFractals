#ifndef Complex_H
#define Complex_H


class Complex
{
public:
	/* Constructors */
	Complex();										/*Default Constructor : New complex = (0,0)*/
	static Complex FromCartesian(double, double);   /*New complex = (real,imaginary)*/
	static Complex FromPolar(double, double);       /*New complex = (mod,arg)*/
	Complex(const Complex& source);                 /*New complex = copy of source*/
	~Complex(void);								    /*Destructor */

													/*Getters & Setters */
	const double GetReal();
	const double GetImaginary();
	const double GetRadius();
	const double GetAngle();
	void SetReal(double);
	void SetImaginary(double);

	/* Public Operators */
	void operator += (const Complex&);
	void operator += (const double&);
	void operator -= (const Complex&);
	void operator -= (const double&);

	/* Display */
	void Display();

private:
	/* Fields */
	double _real;
	double _imaginary;
	/* Private Constructor */
	Complex(double, double);
};


//Non-Member functions - Operators
Complex operator + (const double&, const Complex&);
Complex operator + (const Complex&, const double&);
Complex operator + (const Complex&, const Complex&);

Complex operator - (const double&, const Complex&);
Complex operator - (const Complex&, const double&);
Complex operator - (const Complex&, const Complex&);

Complex operator * (const double&, const Complex&);
Complex operator * (const Complex&, const double&);
Complex operator * (const Complex&, const Complex&);


#endif

