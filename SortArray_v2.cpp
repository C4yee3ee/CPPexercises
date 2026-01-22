#include <iostream>
using namespace std;

int main()
{
	int num[100];
	int n,x,i=0,j;
	
	cout<<"Number to Sort: ";
	cin>>i;
	
	cout<<"\nEnter Elements: "<<endl;
	for(n=0;n<i;n++)
	{
		cin>>num[n];
	}
	
	for(n=0;n<i;n++)
	{
		for(j=0;j<i;j++)
		{
			if(num[n]<num[j])
			{
				x=num[n];
				num[n]=num[j];
				num[j]=x;
			}
		}
	}
	
	cout<<"\nLowest->Highest"<<endl;
	for(n=0;n<i;n++)
	{
		cout<<"\t"<<num[n];
	}

	for(n=0;n<i;n++)
	{
		for(j=0;j<i;j++)
		{
			if(num[n]>num[j])
			{
				x=num[n];
				num[n]=num[j];
				num[j]=x;
			}
		}
	}
	
	cout<<"\nHighest->Lowest"<<endl;
	for(n=0;n<i;n++)
	{
		cout<<"\t"<<num[n];
	}
	
	cout<<endl;
	cout<<"Highest: "<<num [0];
	cout<<" Lowest: "<<num [i-1];
	
	return 0;
}
