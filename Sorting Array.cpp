#include <iostream>
using namespace std;

int main()
{
	int num [100];
	int n, x, i = 0, j;
	
	cout << "Number to Sort: ";
	cin >> i;
	
	cout << "\nEnter Elements: " << endl;
	for(n = 0; n < i; n++)
	{
		cin >> num [n];
	}
	
	cout << endl << endl;
	system("pause");
	system("cls");
	
	cout << "\nNumbers to Sort: " << i;
	cout << "\n\nEntered Elements: " << endl;
	
	for(n = 0; n < i; n++)
	{
		cout << "\t" << num [n];
	}
	
	for(n = 0; n < i; n++)
	{
		for(j = 0; j < i; j++)
		{
			if(num[n] < num[j])
			{
				x = num[n];
				num[n] = num[j];
				num[j] = x;
			}
		}
	}
	
	cout << "\n\nLowest --> Highest" << endl;
	for(n = 0; n < i; n++)
	{
		cout  << "\t" << num[n];
	}

	for(n = 0; n < i; n++)
	{
		for(j = 0; j < i; j++)
		{
			if(num[n] > num[j])
			{
				x = num[n];
				num[n] = num[j];
				num[j] = x;
			}
		}
	}
	
	cout << "\n\nHighest --> Lowest" << endl;
	for(n = 0; n < i; n++)
	{
		cout  << "\t" << num[n];
	}
	
	cout << endl << endl
		 << "\t" << "   Highest: "
		 << num [0]
		 << "\t\tLowest: "
		 << num [i-1];
	
	cout << endl << endl << endl
		 << "Name: Leslie Caye L. Shu"
		 << endl << "Code: 786" << endl;
	
	return 0;
}
