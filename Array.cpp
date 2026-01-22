#include<iostream>
using namespace std;

int main()
{
	int i;
	int drawer[10];
	
	for(i = 0; i < 10; i++)
	{
		cout << "Enter a Number at index " << i <<": ";
		cin >> drawer[i];
		
	}
	
	cout << endl << endl << "Display all the values of the array: \n\n";
	
	for(i = 0; i < 10; i++)
	{
		cout << "\nArray Drawer Index[" << i << "] has a value of: " << drawer[i];
	}
	
	return 0;
}
