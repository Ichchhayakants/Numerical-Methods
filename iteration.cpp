#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
float f(float x)
{
	return (4*(pow(x,3))-3*x);
}
int main()
{
	float x0;
	int maxitr;
	cout<<"enter x0 maxitr:";
	cin>>x0>>maxitr;
	for(int itr=1;itr<=maxitr;itr++)
	{
		float x1= f(x0);
		x0=x1;
		cout<<"afret "<<itr<<" iteration root="<<x1<<"\n";
	}
	return 0;
}
