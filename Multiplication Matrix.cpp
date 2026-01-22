#include<iostream>
#include<windows.h>
using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
void gotoxy(int x, int y); 
int MatrixA[10][10], MatrixB[10][10], MProduct[10][10];
int rowA,colA,rowB,colB;
int a,b, x, y, z;

int main()
{
	cout << "...Multiplication of Matrices...";
	cout << "\n Enter Dimension for Matrix A : ";
	cout << "\n\trow : "; cin >> rowA;
	cout << "\n\tcolumn : "; cin >> colA;
	cout << "\n Enter Dimension for Matrix B : ";
	cout << "\n\trow : "; cin >> rowB;
	cout << "\n\tcolumn : "; cin >> colB;
	
	cout << "\nEnter elements for Matrix A \n";
	for (a = 0; a<rowA ; a++) // row
		for(b = 0; b<colA ; b++) // col
		{
			gotoxy(b * 5 + 2 , a * 2 + 12);
			cin >> MatrixA[a][b];
		}
	
	cout << "\nEnter elements for Matrix B \n";
	for (a = 0; a<rowB ; a++) // row
		for(b = 0; b<colB ; b++) // col
		{
			gotoxy(b * 5 + 2 , a * 2 + 17);
			cin >> MatrixB[a][b];
		}
	
	// initialization of MProduct array
	for (a = 0; a<rowA ; a++) // row
		for(b = 0; b<colB ; b++) // col
			MProduct[a][b] = 0;

	
	// Multiplication of MatrixA and MatrixB
	cout << "\n\n Product of Matrix A and Matrix B\n";
	for(x = 0; x < rowA; x++)	
	{
		for(y = 0; y < colB; y++)
		{
			for(z = 0; z < colA; z++)	
			{
				MProduct[x][y] = MProduct[x][y] + (MatrixA[x][z] * MatrixB[z][y]);
			}
			gotoxy(y * 5 + 2, x * 2 + 25);
			cout << MProduct[x][y];
		}
		//cout << "\n";
	}
	
	return 0;
}

void gotoxy(int x, int y) 
{ 
	CursorPosition.X = x; // Locates column
	CursorPosition.Y = y; // Locates Row
	SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}
