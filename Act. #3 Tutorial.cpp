#include <iostream>
#include <windows.h>
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
void gotoxy(int x, int y);

class rectangle
{
	private:
		double Rectangle;
		double Len;
		double Wid;
	public:
		string* name;	
		double getData(double L,double W)
		{
			Len = L;
			Wid = W;		
		}
		double area(){
			return Len * Wid;
		}
		double perimeter(){
			return 2*(Len + Wid);
		}
	
};
int main()
{
	rectangle rectangle1, rectangle2;
	double sideL, sideW, nm;
	
	gotoxy(5,0);
	cout << "Perimeter & Area w/ Name Swapping\n";
	gotoxy(9,1);
	cout << "By Shu, Leslie Caye\n\n";
	
	gotoxy(10,3);
	cout << "Enter Rectangles\n";
	gotoxy(12,4);
	cout << "1st Rectangle "; string a;
	cout << "\nEnter name: "; cin >> a;
	cout << "Enter Length: "; cin >> sideL;
	cout << "Enter Width: "; cin >> sideW;
	rectangle1.getData(sideL,sideW);
	
	gotoxy(12,9);
	cout << "2nd Rectangle "; string b;
	cout << "\nEnter name: "; cin >> b;
	cout << "Enter Length: "; cin >> sideL;
	cout << "Enter Width: "; cin >> sideW;
	rectangle2.getData(sideL,sideW);
 	
	cout << "\n\nRectangle " << a
		 << "\nPerimeter: " << rectangle1.perimeter()
		 << "\nArea     : " << rectangle1.area()
		 << endl;
	
	cout << "\nRectangle " << b
		 << "\nPerimeter: " << rectangle2.perimeter()
		 << "\nArea     : " << rectangle2.area()
		 << endl << endl;
	
	cout << "=============================================="
		 << "\n\t\tName Swapping"
		 << "\n==============================================\n\n";
	
	cout << "Rectangle " << b
		 << "\nPerimeter: " << rectangle1.perimeter()
		 << "\nArea     : " << rectangle1.area() << endl;
	
	cout << "\nRectangle " << a
		 << "\nPerimeter: " << rectangle2.perimeter()
		 << "\nArea     : " << rectangle2.area();	
	
	return 0;
}

void gotoxy(int x, int y) 
{ 
	CursorPosition.X = x; // Locates column
	CursorPosition.Y = y; // Locates Row
	SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}
