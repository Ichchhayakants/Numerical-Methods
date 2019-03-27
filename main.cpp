#include<iostream>                                                                                                         //05-02-2017
#include "Complex.cpp"

using namespace std;

int main()
{
 double Real, Imag;
 double Real1, Imag1;
  cout<<"Enter Real part of 1st number  =   " ;
 cin>>Real ;
 cout<<"Enter Imaginary part of 1st number  =   " ;
 cin>>Imag ;
 cout<<"Enter Real part of 2nd number   =   " ;
 cin>>Real1 ;
 cout<<"Enter Imaginary part of 2nd number  =   " ;
 cin>>Imag1 ;

 Complex Obj1(Real,Imag);				// Parameterized constructor call
 Complex Obj2(Real1,Imag1);				// Copy constructor call


 Complex Obj3 ;
 
  //normal......................
 cout<<"\nNorm of 1st complex number  sqrt(Z1) :   ";
 cout<<Obj1.Normal()<<endl;
 cout<<"Norm of 2nd complex number  sqrt(Z2) :   ";
 cout<<Obj2.Normal()<<endl;

//addtion.......................
 Obj3 = Obj2 + Obj1 ;
 cout<<"\nAddition of two complex no: ";
 Obj3.Display();

//subtraction.....................
 Obj3 = Obj1 - Obj2 ;
 cout<<"\nSubtraction of two complex no : ";
 Obj3.Display();

//multiplication..................
 Obj3 = Obj1 * Obj2 ;
 cout<<"\nMultiplication of two complex no :  ";
 Obj3.Display();

//division........................
 Obj3 = Obj1 / Obj2 ;
 cout<<"\nDivision of two complex no :  ";
 Obj3.Display();

//conjugate.......................	
 cout<<"\nConjugate of 1st complex no Z1'  :  ";
 Obj3 = Obj1.Conjugate();
 Obj3.Display();
 cout<<"Conjugate of 2nd complex no Z2'  :  ";
 Obj3 = Obj2.Conjugate();
 Obj3.Display();

 cout<<"\nICHCHHAYAKANT SHARMA";
 return 0;
}

