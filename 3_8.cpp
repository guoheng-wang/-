#include<iostream.h>
#include<math.h>
void main()
{
	int a,b,c,d;
	cin>>a>>b;
	if(b%a==0)
	{
		c=b/a;
		cout<<"��="<<c<<endl;}
	else
	{c=b/a;
	    d=b%a;
		cout<<"��="<<c<<",����="<<d<<endl;
	}
}