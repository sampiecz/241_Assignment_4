/***********************************************************
 CSCI 241 - Assignment 4 - Fall 2017

 Progammer: Sam Piecz
 Z-ID: Z1732715
 Section: 1
 TA: Sumaiya Abdul
 Date Due: October 19, 2017

 Purpose: Use operator overloaders. 
 ************************************************************/
#include <iostream>
#include "Complex.h"


/***************************************************************
 ProviderDB
 
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
 ProviderDB
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
Complex::Complex(double newReal, double newImaginary)
{
    realComplex = newReal;
    imaginaryComplex = newImaginary;
}



/***************************************************************
 ProviderDB
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
void Complex::setComplex(double newReal, double newImaginary)
{
    setRealPart(newReal);
    setImaginaryPart(newImaginary);
}



/***************************************************************
 ProviderDB
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
void Complex::getComplex(double newReal, double newImaginary) const
{
       
}



/***************************************************************
 ProviderDB
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
void Complex::setRealPart(double newReal)
{
    realComplex = newReal;
}



/***************************************************************
 ProviderDB
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
double Complex::getRealPart() const
{
    return realComplex;
}



/***************************************************************
 ProviderDB
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
void Complex::setImaginaryPart(double newImaginary)
{
    imaginaryComplex = newImaginary;
}



/***************************************************************
 ProviderDB
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
double Complex::getImaginaryPart() const
{
    return imaginaryComplex;
}



/***************************************************************
 ProviderDB
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
Complex::operator+()
{

}


/***************************************************************
 ProviderDB
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
Complex::operator*()
{

}



/***************************************************************
 ProviderDB
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
Complex::operator==()
{

}



/***************************************************************
 ProviderDB
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters. 

 Returns:
 ***************************************************************/
ostream operator<<()
{

}



/***************************************************************
 ProviderDB
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters.
 
 Returns:
 ***************************************************************/
istream operator>>()
{

}
