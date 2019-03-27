#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
float f(float x)
{
	return (x*x*x-4*x*x-10);
}
void bisect(float *x,float a,float b,int *itr)
{
	*x=(a+b)/2;
	++(*itr);
	cout<<"iteration no."<<setw(3)<<*itr<<"x="<<setw(7)<<setprecision(5)<<*x<<"\n";
}
int main()
{
	int itr=0, maxitr;
	float x , a,b,aerr,x1;
	cout<<"enter the value of a,b,allowed error, max iteration:\n";
	cin>>a>>b>>aerr>>maxitr;
	cout<<fixed;
	bisect(&x,a,b,&itr);
	do
	{
		if(f(a)*f(x)<0)
		b=x;
		else
		a=x;
		bisect(&x1,a,b,&itr);
		if(fabs(x1-x)<aerr)
		{
			cout<<"after"<<itr<<" iterations, root ="<<setw(6)<<setprecision(4)<<x1<<"\n";
			return 0;
		}
		x=x1;
	}while(itr<maxitr);
	cout<<"solution does not converse (iterations not sufficient) \n";
	return 1;
}
