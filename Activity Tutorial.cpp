//Determine Area and Circumference of a Circle
#include<iostream>
#include<cmath>
#include<iomanip>
#include<conio.h>
using namespace std;
double radius, area_Circle = 0, circumference = 0;
int main()
{
	system("cls");
	cout <<"==================================================\n";
	cout <<"Program to determine Area" 
	       " and Circumference of a Circle\n";	
	cout <<"Enter radius : ";       
	cin >> radius;
	
	area_Circle   = M_PI * pow(radius,2) ;
	circumference = 2 * M_PI * radius ;
	
	cout << "\t\tArea          : " 
	     << setw(10)
		 << left
		 << setprecision(3)
	     << showpoint
	     << fixed
		 << area_Circle<<endl;
	     
	     
	cout << "\t\tCircumference : " 
	     << setw(10)
		 << left
		 << setprecision(3)
	     << showpoint
	     << fixed
		 << circumference<<endl;
	cout << "\n\n========================================================";
Again:	
	cout << "\n\n\tWould you like to try again? (Y/N) ";
	char  input;
	input = getche();
	cout << endl <<endl<<"\t";
	system("pause");
	switch(input)  
	{
		case 'Y':
			system("cls"); 
			main();
		case 'N':
			cout << "\n\n\n\n\n....This program will terminate in a short while...\n";
			cout << ".................Thank you.............\n\n\n\n\n\n\n";
			break;
		default :
			cout << "\n\nInvalid Entry...Press Y or N only...";
			goto Again;
	} // end of switch structure
	return 0;
} //end of main
