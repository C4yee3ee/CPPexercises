#include <iostream>
using namespace std;

int GetFahrenheit()
{
    int Temp = 0;
    cout << "Enter Temperature in Fahrenheit: ";
    cin >> Temp;
    return Temp;
}

int CalcCelsius(int Temp)
{
    double Cel=0.0;
    Cel = 5.0 / 9.0 * (Temp - 32.0);
    return Cel;
}

int main() 
{
    int Fahrenheit = 0;
    int Celsius = 0;
    Fahrenheit = GetFahrenheit();
    Celsius = CalcCelsius(Fahrenheit);
    cout << "Temperature in Celsius is "
		 << Celsius
		 << "C"
		 << endl;
}
