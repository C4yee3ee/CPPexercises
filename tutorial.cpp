#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare array
	int temperatures[7][2] = { 0 };
	double avgHigh = 0.0;
	double avgLow = 0.0;
	int high, low, total = 0;
	
	//receive imput from user
	cout << "Enter highest and lowest temperatures for 7 days"<< endl;
	for (int row = 0; row < 7; row ++)
	{
		for (int col = 0; col < 2; col ++)
		{
			if (col == 0)
			{
				cout << "Day" << row + 1<< "high temp:";
				cin >> temperatures[row][col];
			}
			else
			{
				cout << "Day" << row + 1 << "low temp:";
				cin >> temperatures[row][col];
			}
		}
		cout << endl;
   }//end for
   //calculate and display the average of high //temperature
   //and average of lowest temperature along with highest
   //temperature and lowest temperature
   high = temperatures[0][0];
   low = temperatures[0][1];
   for (int col = 0; col < 2; col ++)
   {
       for (int row = 0; row < 7; row ++)
       {
           total += temperatures[row][col];
           if (col == 0)
           {
               if (temperatures[row][col] > high)
               {
                   high = temperatures[row][col];
            	}
           }
       }

	   if (col == 0)
       {
       	   avgHigh = total / 7.0;
           cout << fixed << setprecision(1);
           cout << "Average High Temperature:" << avgHigh << endl;
       }
   }
	for (int col = 0; col < 2; col ++)
   {
       for (int row = 0; row < 7; row ++)
       {
           total += temperatures[row][col];
           if (col == 1)
           {
               if (temperatures[row][col] < low)
                {
				   low = temperatures[row][col];
			}
           }
       }
       
       
       if(col == 1)
       {
       	   avgLow = total / 7.0;
           cout << fixed << setprecision(1);
           cout << "Average Low Temperature:" << avgLow;
       }
   }
   return 0;
} //end of main function
