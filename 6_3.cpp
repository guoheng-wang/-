#include<iostream.h>
void main()
{
	int a[4][4];
	int i,j,sum=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>a[i][j];
			if(i==j)
			{
				sum+=a[i][j];
				cout<<"主对角线元素之和为: "<<sum<<endl;break;
			}
		}
	}
			for(i=0;i<4;i++)
				for(j=4;j>0;j--)
				{
					a[i][j]+=1;
				}
				for(j=0;j<4;j++)
				{
					a[i][j]-=1;
				}
				for(i=0;i<4;i++)
				{
					for(j=0;j<4;j++)
                   	cout<<a[i][j]<<" ";
					cout<<endl;
				}
				cout<<"\n";
}