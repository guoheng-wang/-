#include<iostream.h>
void main()
{
	int x,y;
	cout<<"please input y:"<<endl;
	cin>>x;
	if(x<10)
		y=1;
	else
		if(x<100)
			y=2;
		else
			if(x<1000)
				y=3;
			else
				y=4;
			switch(y)
			{
			case 1:cout<<"less than 10"<<endl;break;
			case 2:cout<<"10-99"<<endl;break;
			case 3:cout<<"100-999"<<endl;break;
			case 4:cout<<"more than 1000"<<endl;break;
}
}
