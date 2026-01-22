//Leslie Caye Shu
//BSCpE Freshmen
//Tutorial Activity 2
#include<iostream>
#include<iomanip>
using namespace std;

double area(double);
double circumference(double);
double PI = 3.14159265;

int main()
{
	double r;
	
	cout << "========================================================\n";
	cout << "Program to determine Area" 
	        " and Circumference of a Circle\n";
	cout << "\nEnter Radius: ";
	cin >> r;
	
	cout << endl
		 << "\tCircumference: "
		 << setw(10)
		 << right
		 << setprecision(4)
	     << showpoint
	     << fixed
		 << circumference (r)
		 << endl;
		 
	cout << "\tArea         : "
		 << setw(10)
		 << right
		 << setprecision(4)
	     << showpoint
	     << fixed
		 << area (r)
		 << endl;
	cout << "\n\n========================================================";

	return 0;	
}

double area(double rad)
{	
	return PI * rad * rad;
}

double circumference(double rd)
{	
	return 2 * PI * rd;
}
