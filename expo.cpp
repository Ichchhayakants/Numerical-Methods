#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int fact(int a)
 {
   int fact=1;
   for(int j=1;j<=a;j++)
   {
	 fact=fact*j;
    }
   return fact;
 }
int main()
 {
 	long double x0=1.0,x1;
 	int n;
 	float x;
 	cout<<"enter x and no of terms: ";
 	cin>>x>>n;
	 for(int i=1;i<=n;i++)
 	{
 		x1=x0+((pow(x,i))/fact(i));
 		cout<<"after "<<i<<"terms, value= "<<x1<<"\n";
 		x0=x1;
	 }
	 return 0;
 }
