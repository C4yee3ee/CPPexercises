#include <iostream>
using namespace std;

void GetFahrenheit(int& Temp)
{
    cout << "Enter Temperature in Fahrenheit: ";
    cin >> Temp;
}

void CalcCelsius(int& Temp)
{
	
    int Cel=0.0;
    Cel = 5.0 / 9.0 * (Temp - 32.0);
    cout << "Temperature in Celsius is "
		 << Cel
		 << "C"
		 << endl;
}

int main() 
{
	int Temp;
	GetFahrenheit(Temp);
    CalcCelsius(Temp);
    return 0;
}
