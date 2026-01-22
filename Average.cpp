// This program will show how to get the total and average of an elements of an array
#include<iostream>
#include<iomanip>
using namespace std;
int value[30];
int x, entry;
double total = 0, average = 0;

int main()
{
	cout << "\tGetting the total and Average\n";
	cout << "Enter number of entries : ";
	cin >> entry;
	for(x = 0; x < entry; x++)
	{
		cout << "Entry No. " << x + 1 << " : ";
		cin >> value[x];
		total = total + value[x];
	 } 
	average = total / x;
	cout << "\nTotal   : " << setprecision(2) << fixed << showpoint << total;
	cout << "\nAverage : " << setprecision(2) << fixed << showpoint << average;

	/* 
	cout << "The number that was stored are the following : \n";
	for(x = 0; x < entry; x++)
	{
		cout << "\tEntry No. " << x + 1 << " : ";
		cout << value[x] << endl;
	}
	*/
	return 0;
}
