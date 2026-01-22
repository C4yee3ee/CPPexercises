#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int temp[7][2];
	int high, low ;
	double total_h = 0.0 ;
	double total_l = 0.0 ;
	double avgHigh = 0.0;
	double avgLow  = 0.0;


	cout << "Enter Highest and Lowest Temperatures for 7 days"
		 << endl << endl
		 << "======================="
		 << endl << " Day"
		 << "  Highest"
		 << "  Lowest"
		 << "\n=======================\n\n";

	for (int row = 0; row < 7; row++)
	{
		for (int col = 0; col < 2; col++)
		{
			if (col == 0)
                cout << "  " << row + 1 << "\t";
            	cin >> temp[row][col];
		}
	}

	high = temp[0][0];
	low  = temp[0][1];

	for (int col = 0; col < 2; col++)
	{
		for (int row = 0; row < 7; row++)
		{
			if ((col == 0) && (temp[row][col] > high))
            {
				high = temp[row][col];
				total_h = total_h + temp[row][col];
			}

            if ((col == 1) && (temp[row][col] < low))
            {
				low = temp[row][col];
				total_l = total_l + temp[row][col];
			}

            /*if (col == 0)
            {
				total_h = total_h + temp[row][col];
			}

            if (col == 1)
    		{
				total_l = total_l + temp[row][col];
			}*/
		}

		if (col == 0)
		{
			avgHigh = total_h / 7.0;
			cout << fixed 
				 << setprecision(2)
				 << "\nAverage High Temperature:"
				 << avgHigh
				 << endl;
		}
		else
		{
			avgLow = total_l / 7.0;
			cout << fixed 
				 << setprecision(2)
				 << "Average Low Temperature:"
				 << avgLow
				 << endl;
		}
	}
	
	cout << endl << endl
		 << "Name: Leslie Caye L. Shu"
		 << endl << "Code: 786" << endl;
		 
	return 0;
}
