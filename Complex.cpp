/***********************************************************
 CSCI 241 - Assignment 4 - Fall 2017

 Progammer: Sam Piecz
 Z-ID: Z1732715
 Section: 1
 TA: Sumaiya Abdul
 Date Due: October 19, 2017

 Purpose: Use operator overloaders. 
 ************************************************************/
#include "Complex.h"


/***************************************************************
 Complex Constructor 
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
Complex::Complex()
{
    realComplex = 0;
    imaginaryComplex = 0;
}


/***************************************************************
 Alternate Complex Constructor 
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
Complex::Complex(double newReal, double newImaginary)
{
    setRealPart(newReal);
    setImaginaryPart(newImaginary);
}



/***************************************************************
 setComplex 
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
void Complex::setComplex(double newReal, double newImaginary)
{
    realComplex = newReal;
    imaginaryComplex = newImaginary;
}



/***************************************************************
 getComplex 
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
void Complex::getComplex(double& newReal, double& newImaginary) const
{
    newReal = realComplex;
    newImaginary = imaginaryComplex;  
}



/***************************************************************
 setRealPart
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
void Complex::setRealPart(double newReal)
{
    realComplex = newReal;
}



/***************************************************************
 getRealPart 
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
double Complex::getRealPart() const
{
    return realComplex;
}



/***************************************************************
 setImaginaryPart 
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
void Complex::setImaginaryPart(double newImaginary)
{
    imaginaryComplex = newImaginary;
}



/***************************************************************
 getImaginaryPart 
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
double Complex::getImaginaryPart() const
{
    return imaginaryComplex;
}



/***************************************************************
 operator+ 
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
Complex Complex::operator+(const Complex& rightOperand) const
{
    Complex storage;

    storage.realComplex = realComplex + rightOperand.realComplex;

    storage.imaginaryComplex = imaginaryComplex + rightOperand.imaginaryComplex;

    return storage;
}


/***************************************************************
 operator* 
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
Complex Complex::operator*(const Complex& rightOperand) const
{
    Complex storage;

    storage.realComplex = (realComplex * rightOperand.realComplex) - (imaginaryComplex * rightOperand.imaginaryComplex);

    storage.imaginaryComplex = (realComplex * rightOperand.imaginaryComplex) + (imaginaryComplex * rightOperand.realComplex);

    return storage;   
}



/***************************************************************
 operator== 
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
bool Complex::operator==(const Complex& rightOperand) const
{
    if (realComplex == rightOperand.realComplex && imaginaryComplex == rightOperand.imaginaryComplex)
        return true;
    else
        return false;
}


/***************************************************************
 operator<< 
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
ostream& operator<<(ostream& output, const Complex& alpha)
{

    output << '(' << alpha.realComplex << ", " << alpha.imaginaryComplex << ')';

    return output;

}



/***************************************************************
 operator>> 
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters.
 
 Returns:
 ***************************************************************/
istream& operator>>(istream& input, Complex& alpha)
{
    char ch;
    input >> ch;

    input >> alpha.realComplex;
    input >> ch;
    input >> alpha.imaginaryComplex;
    input >> ch;

    return input;
}
