#include<iostream>
#include<math.h>
using namespace std;

class Complex
{
 public :
 double Real ;
 double Imag ;
 Complex();						             // Default constructor
 Complex(double Real,double Imag);			// Parameterized constructor
 Complex(const Complex &Obj1);		       // Copy Contructor
 ~Complex();						      // Destructor

 double Normal();
 void Display();
 Complex Conjugate();
 Complex operator + (Complex Obj1);
 Complex operator - (Complex obj1);
 Complex operator * (Complex obj1);
 Complex operator / (Complex Obj1);

};
