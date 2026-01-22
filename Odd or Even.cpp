// This program will show how to get the total and average of an elements of an array
#include<iostream>
#include<iomanip>
using namespace std;
int value[30], even[30], odd[30];
int x, entry, e_count = 0, o_count = 0;
int totaleven = 0, averageeven = 0;
int totalodd = 0, averageodd = 0;
int main()
{
	cout << "\tGetting the total and Average\n";
	cout << "Enter number of entries : ";
	cin >> entry;

	for(x = 0; x < entry; x++)
	{
		cout << "Entry No. " << x + 1 << " : ";
		cin >> value[x];
		if(value[x]%2 == 0)
		{
			even[e_count] = value[x];
			totaleven = totaleven + even[e_count];
			e_count++;
		}
		else 
		{
			odd[o_count] = value[x];
			totalodd = totalodd + odd[o_count];
			o_count++;
		}
	 } 
	 
	 cout << "\n\tEven Numbers : \n";
	 for (int a = 0; a < e_count ; a++)
	 {
	 	cout << even[a] << endl;
	 }
	 cout << "Total : " << totaleven;
	 
	 
	 cout << "\n\tOdd Numnbers : \n ";
	 for (int b = 0; b < o_count ; b++)
	 {
	 	cout << odd[b] << endl;
	 }
	cout << "Total : " << totalodd;
	

	return 0;
}
