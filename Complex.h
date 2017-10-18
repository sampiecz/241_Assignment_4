#ifndef COMPLEX_H
#define COMPLEX_H

class Complex 
{

    // Data members
    private:
        double real_complex;
        double imaginary_complex;
 
    // Methods Prototypes
    public:
        // Constructor
        Complex(double=0, double=0);
       
        // Complex
        void setComplex(double, double);
        void getComplex(double, double) const; 
       
        // Real
        void setRealPart(double);
        double getRealPart() const;

        // Imaginary
        void setImaginaryPart(double);
        double getImaginaryPart() const;
};

#endif
