#include <iostream>
using namespace std;

int main()
{
	int num[3][3] = {{1,2,3} , {5,4,6} , {7,8,9}};
	int row, col;
	
	for(row = 0; row < 3; row++)
	{
		cout << endl;
		
		for(col = 0; col < 3; col++)
		{
			cout << "\t" << num[row][col] << "\t";
		}
		
		cout << endl;
	}
	
	
	return 0;
}
