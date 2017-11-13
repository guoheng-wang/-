#include<iostream.h>
float fun(int n)
{
	int i,a=0;
	float s=0.0;
	for(i=1;i<=n;i++)
	{
		a+=1;
	    s+=1.0/a;
	}
	return s;
}
void main()
{
	int n;
	float s;
	cin>>n;
	s=fun(n);
	cout<<"s=1+1/(1+2)+1/(1+2+3)+...+1/(1+2+3+...+n)= "<<s<<endl;
}
