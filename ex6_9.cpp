#include<iostream.h>
int fun(int m,int a[]);
{
	int n=0;
	int i;
	for(i=1;i<m;++i)
	{
		if(z%7==0||z%11==0)
		{a[n]=i;
		n++;
	}
	}
	return n;
	}
}
void main()
{
	int n;
	int count;
	int a[100];
	int i;
	cout<<"plesae intput n: ";
	cin>>n;
	count=fun(n,a);
	for(i=0;i<count;++i)
	{
		cout<<a[i]<<endl;
	}
	cout<<"hµÄÖµÎª"<<count<<endl;
	return 0;
}