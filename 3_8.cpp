#include<iostream.h>
#include<math.h>
void main()
{
	int a,b,c,d;
	cin>>a>>b;
	if(b%a==0)
	{
		c=b/a;
		cout<<"ษฬ="<<c<<endl;}
	else
	{c=b/a;
	    d=b%a;
		cout<<"ษฬ="<<c<<",ำเสý="<<d<<endl;
	}
}