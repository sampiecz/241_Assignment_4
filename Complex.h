#ifndef COMPLEX_H
#define COMPLEX_H

class Complex 
{    
    // I get by with help from my friends
    friend ostream& operator<<(ostream&, const Complex&);
    friend istream& operator>>(istream&, Complex&);

    // Data members
    private:
        double realComplex;
        double imaginaryComplex;
 
    // Methods Prototypes
    public:
        // Constructor
        Complex();
        Complex(double newReal, double newImaginary);
       
        // Complex
        void setComplex(double, double);
        void getComplex(double, double) const; 
       
        // Real
        void setRealPart(double);
        double getRealPart() const;

        // Imaginary
        void setImaginaryPart(double);
        double getImaginaryPart() const;

        // Operators
        Complex operator+(const Complex&) const;
        Complex operator*(const Complex&) const;
        Complex operator==(const Complex&) const;

};

#endif
