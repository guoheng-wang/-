#include<iostream.h>
void main()
{
	int x;
	cout<<"please input x:"<<endl;
	cin>>x;
	if(x<10)
	cout<<"less than 10"<<endl;
	else
		if(x<100)
		cout<<"10-99"<<endl;
		else
			if(x<1000)
			cout<<"100-999"<<endl;
			else
				cout<<"more than 1000"<<endl;
}
