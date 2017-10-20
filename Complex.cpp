/***********************************************************
 CSCI 241 - Assignment 4 - Fall 2017

 Progammer: Sam Piecz
 Z-ID: Z1732715
 Section: 1
 TA: Sumaiya Abdul
 Date Due: October 19, 2017

 Purpose: Create operator overloaders for complex class. 
 ************************************************************/
#include "Complex.h"


/***************************************************************
 Complex Constructor 
 
 Use: Provides a default constructor with values set to 0. 
 
 Parameters: No parameters. 

 Returns: No return.
 ***************************************************************/
Complex::Complex()
{
    realComplex = 0;
    imaginaryComplex = 0;
}


/***************************************************************
 Alternate Complex Constructor 
 
 Use: Alternate constructor that can take values passed into it. 
 
 Parameters: A double called newReal. Another double called
 newImaginary.

 Returns: No return.
 ***************************************************************/
Complex::Complex(double newReal, double newImaginary)
{
    setRealPart(newReal);
    setImaginaryPart(newImaginary);
}



/***************************************************************
 setComplex 
 
 Use: A setter method. Sets new real and imaginary numbers. 
 
 Parameters: A double called newReal. Also takes a second double
 called newImaginary. 

 Returns: No return.
 ***************************************************************/
void Complex::setComplex(double newReal, double newImaginary)
{
    realComplex = newReal;
    imaginaryComplex = newImaginary;
}



/***************************************************************
 getComplex 
 
 Use: Getter method for complex class. Gets the objects real and
 imaginary data members. 
 
 Parameters: This method takes two references to double 
 variables as arguments, representing the real and imaginary
 parts of a complex number.

 Returns: No return.
 ***************************************************************/
void Complex::getComplex(double& newReal, double& newImaginary) const
{
    newReal = realComplex;
    newImaginary = imaginaryComplex;  
}



/***************************************************************
 setRealPart
 
 Use: Setter method for real number.  
 
 Parameters: A double, representing the real part of a complex 
 number. 

 Returns: No return.
 ***************************************************************/
void Complex::setRealPart(double newReal)
{
    realComplex = newReal;
}



/***************************************************************
 getRealPart 
 
 Use: Getter method that returns the real number.
 
 Parameters: No parameters.

 Returns: Returns realComplex which is a real number of the
 double data type.
 ***************************************************************/
double Complex::getRealPart() const
{
    return realComplex;
}



/***************************************************************
 setImaginaryPart 
 
 Use: Assign the method parameter to the imaginary part data 
 member of the object that called the method. 
 
 Parameters: A double, representing the imaginary part of a 
 complex number.

 Returns: No return.
 ***************************************************************/
void Complex::setImaginaryPart(double newImaginary)
{
    imaginaryComplex = newImaginary;
}



/***************************************************************
 getImaginaryPart 
 
 Use: Return the data member representing the imaginary part of 
 the complex number.
 
 Parameters: None.

 Returns: The imaginary part of the complex number (a double).
 ***************************************************************/
double Complex::getImaginaryPart() const
{
    return imaginaryComplex;
}



/***************************************************************
 operator+ 
 
 Use: Makes it possible to add complex data objects.
 
 Parameters: A reference to a constant Complex object. 

 Returns: A Complex object that holds the result of the
 arithmetic.
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
 
 Use: Makes it possible to multiply complex data objects.  
 
 Parameters:  A reference to a constant complex object.

 Returns: The data object.  It's called storage in this case.
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
 
 Use: Makes it possible to compare two complex data objects. 
 
 Parameters: A reference to a constant complex object.

 Returns: Returns either true or false. Depends.
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
 
 Use: Standalone function that couts complex objects. 
 
 Parameters: A reference to an ostream object and a reference
 to a complex object. 

 Returns: A reference to an ostream object ie the first parameter.
 ***************************************************************/
ostream& operator<<(ostream& returnMe, const Complex& complexObject)
{

    returnMe << '(' << complexObject.realComplex << ", " << complexObject.imaginaryComplex << ')';

    return returnMe;

}



/***************************************************************
 operator>> 
 
 Use: Standalone function that reads a complex object. 
 
 Parameters: First is a reference to an istream object. Second
 is a reference to a complex object.
 
 Returns: A reference to an istream object ie the first parameter.
 ***************************************************************/
istream& operator>>(istream& returnMe, Complex& complexObject)
{
    char holder;
    returnMe >> holder;

    returnMe >> complexObject.realComplex;
    returnMe >> holder;
    returnMe >> complexObject.imaginaryComplex;
    returnMe >> holder;

    return returnMe;
}
