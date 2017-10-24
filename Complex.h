//*********************************************************************
// FILE:        Complex.h
// AUTHOR:      Samuel Piecz
// LOGON ID:    Z1732715
// DUE DATE:    10/19/17
//
// PURPOSE:     Declaration for the Complex class. Operator overload. 
//********************************************************************
#ifndef COMPLEX_H
#define COMPLEX_H

#include <ostream>
#include <istream>
using std::istream;
using std::ostream;

class Complex 
{    
    /*
                                                                   .od88888bo.
    _.ooooo._                               _.oooooo._           .d88888888888b
  .d888888888b                            _d8888888888b.        d88888888888888b
 .888888888888b                          d88888888888888b_     d8888888888888888b
d888888888888888b.                      d88888888888888888b    888888888888888888
8888888`"Y8888888b          ____       d8888888888888888888b   888888P""Y8888P888b
88P'  _|  |`_ `Y88      .ood88888b.    88888888""""`Y8888888b  88P' =,  \  =- `Y88
88P  '-'   `-` `Y8     d88888888888b.  888P  ' ,=-   `Y8888"Y  88P'      `     888
888             Y8    d88888888888888b  Y/ _ `.       |888p 8  88     _-_      P \
| Y     '"`      8\  d888888P""""""Y88b \ /"|          Y - .8  |Y     ' '      | |
\\     ."-".    |// 888888P' '_   \_ `Y  J  |'-)        |-'88  \`    _.--._    |_'
 `-    -----`   |'  888888P -'"    \".|   |  " ___      | 888   `|   '  -      |8
  Y      =     /Y   8P Y88     , -' ) |    \ |"-'     .'  Y88    `.    `       |
   |         .' F   \| ,Y8b    / ___  F     \ '_.'  .'     Y8     |`--.___.--' |
  / `. ` ---'  |     \         -'._.\|       \    .'        Y_    )           /`.
.<    `-       |      \`-'        =  |        `._'         .' \.-'|        _.' / \
  `-.   `.     |       Y| `     _   /            )-._    .'    /  |`-.__.-'   /   \
     \    \__.'|       `|        `""|           J\   `-.'     /  J   .-.     /
      \    /\  |`.      |           |           / \   / \    /   /   (  )  .'
       \   | | |  `-   / \     `    |        _.'   \  \ |   /    \    ) |.'
        \  | | |    `./   `.       _|    _.-'       \  | \ /      \   | '
         \ | | |       \    `.__.-' |_.-'            `.|  V        \  /
          \| | /        \     / \  / \                 \  /         \/
           \ | |         \    \ ( /                     \/
            \|/           `.  | |/
             V              \ | /
                             `.'       */

    // I get by with a little help from my friends
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
        Complex(double, double);
       
        // Complex
        void setComplex(double, double);
        void getComplex(double&, double&) const; 
       
        // Real
        void setRealPart(double);
        double getRealPart() const;

        // Imaginary
        void setImaginaryPart(double);
        double getImaginaryPart() const;

        // Operators
        Complex operator+(const Complex&) const;
        Complex operator*(const Complex&) const;
        bool operator==(const Complex&) const;

};

#endif
