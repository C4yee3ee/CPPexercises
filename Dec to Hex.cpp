// program to convert dec to hex

#include<iostream>
using namespace std;
int dec_no;
int hex_no[100];
int index = 0, subscript;

int main()
{
	cout << "Enter a decimal number : ";
	cin >> dec_no;
	while(dec_no != 0)
	{
		hex_no[index] = dec_no % 16;
		dec_no = dec_no / 16;
		index++;
	}
	
	//to output the hex number  
	// static_cast< int or char >(Array[Variable]) - change int to char or char to int
	for(subscript = index - 1; subscript >= 0; subscript--)
	{
		if(hex_no[subscript] >= 10)
			cout << static_cast<char>(hex_no[subscript] + 55 );
		else 
			cout << hex_no[subscript];
	}	
	
	return 0;
}
