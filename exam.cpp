#include<iostream >
#include<conio.h>
using namespace std; 
int main ()
{
int sum = 0;int y = 0;

do

{ 

     for(int x = 1; x < 5; x = x + 1) 

     sum = sum + x; // end of for loop 

     y = y + 1;} 

while ( y < 3);

cout << sum << endl;
}
