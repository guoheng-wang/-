#include<iostream.h>
#include<math.h>
void main()
{
	int a,b,c,d,s;
	cin>>a>>b>>c;
		if(a>=b+c||b>=a+c||c>=a+b)
			cout<<"不能构成三角形"<<endl;
		else
		{
			d=(a+b+c)/2;
			s=sqrt(d*(d-a)*(d-b)*(d-c));
			cout<<"s="<<s<<endl;
		}
}


