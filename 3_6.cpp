#include<iostream.h>
void main()
{
	float r,k,c,s;
	float pi=3.14159;
	cin>>r>>k;
		if(k==1)
		{
			s=pi*r*r;
			cout<<"s="<<s<<endl;}
		else if(k==2)
		{c=2*pi*r;
		cout<<"c="<<c<<endl;}
		else if(k==3)
		{s=pi*r*r;
		    c=2*pi*r;
			cout<<"s="<<s<<",c="<<c<<endl;
		}
}
