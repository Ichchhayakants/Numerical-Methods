#include<iostream>
#include<math.h>
#include "Complex.hpp"


using namespace std;


Complex::Complex()							// Default constructor
{
 Real = 0 ;
 Imag = 0 ;
}


Complex::Complex(double Real,double Imag)				// Parameterized constructor
{
 this->Real = Real ;
 this->Imag = Imag ;
}


Complex::Complex(const Complex &Obj1)				// Copy Contructor
{
 Real = Obj1.Real ;
 Imag = Obj1.Imag ;
}


Complex::~Complex()							// Destructor
{
 
}


void Complex::Display()
{
 cout<<Real;
 if(Imag > 0)
   cout<<" + ";
 cout<<Imag ;
 cout<< "i" << endl ;
}


double Complex::Normal()
{
 double Answer = sqrt((Real*Real) + (Imag*Imag) );
 return Answer;
}


Complex Complex::operator + (Complex Obj1)			
{
 Complex Obj3 ;
 Obj3.Real = this->Real + Obj1.Real ;					
 Obj3.Imag = this->Imag + Obj1.Imag ;				
 return Obj3 ;
}


Complex Complex::operator - (Complex Obj1)			
{
 Complex Obj3 ;
 Obj3.Real = this->Real-Obj1.Real ;							
 Obj3.Imag = this->Imag-Obj1.Imag ;				
 return Obj3 ;
}


Complex Complex::operator * (Complex Obj1)				
{
 Complex Obj3 ;
 Obj3.Real =  (this->Real * Obj1.Real) - (this->Imag * Obj1.Imag) ;			
 Obj3.Imag = (this->Real * Obj1.Imag) + (Obj1.Real * this->Imag) ;				
 return Obj3 ;
}


Complex Complex::operator / (Complex Obj1)				
{
 Complex Obj3 ;
 Obj3.Real =((this->Real*Obj1.Real) + (this->Imag*Obj1.Imag) )/ ((Obj1.Real*Obj1.Real) + (Obj1.Imag*Obj1.Imag));			
 Obj3.Imag = ((this->Real * Obj1.Imag) - (Obj1.Real * this->Imag)) / ((Obj1.Real * Obj1.Real) + (Obj1.Imag * Obj1.Imag));				
 return Obj3 ;
}


Complex Complex::Conjugate()
{
 Complex temp(Real , Imag*(-1)) ;
 return temp;
}
