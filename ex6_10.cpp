#include<iostream.h>
float fun(double h)
{
	long t;
	t=(h*1000+5)/10;
	return (float)t/100;
}
main()
{
	float a;
	cout<<"Enter a: "<<endl;
	cin>>a;
	cout<<"The original data is: "<<a<<endl;
	cout<<"The result £º"<<fun(a)<<endl;
	return 0;
}