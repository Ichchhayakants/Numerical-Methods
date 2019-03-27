#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
float f(float x)
{
	return (x*x*x+4*x*x-10);
}
float df(float x)
{
	return(3*x*x+8*x);
}
int main()
{
	int itr,maxitr;
	float h,x0,x1,aerr;
	cout<<"enter x0,allowed error,max iteration:\n";
	cin>>x0>>aerr>>maxitr;
	cout<<fixed;
	for(itr=1;itr<=maxitr;itr++)
	{
		h=f(x0)/df(x0);
		x1=x0-h;
		cout<<"iteration no. "<<sew(3)<<itr<<" x="<<setw(9)<<setprecision(6)<<x1<<"\n";
		if(fabs(h)<aerr)
		{
			cout<<"after no."<<setw(3)<<itr<<"iterations, root="<<setw(8)<<setprecision(6)<<x1;
			return 0;
		}
		x0=x1;
	}
	cout<<"iteration not sufficient, solution does not converse\n";
	return 1;
}
