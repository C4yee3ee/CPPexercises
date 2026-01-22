#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
double fx(double);
double fcal(double);
double Calfalsi(double, double); 
const int limit = 1000;
double xcal[limit], xpositive[limit], xnegative[limit];
int n;
void line();

int main()
{
	 line();
    cout << "Enter the positive value: ";
    cin >> xpositive[0];
    line();
    cout << "Enter the negative value: ";
    cin >> xnegative[0];
    line();
    cout << "Set maximum range for value iteration: ";
    cin >> n;
	 cout<< endl;    
    
    for(int i = 0; i < n; i++)
	{
            xcal[i] = Calfalsi(xpositive[i], xnegative[i]);
            
            if(fcal(xcal[i])> 0)
			{
                         xpositive[i+1] = xcal[i];
                         xnegative[i+1]=xnegative[i];
            }
            else
			{
                         xnegative[i+1] = xcal[i];
                         xpositive[i+1]=xpositive[i];
            }
    }
    
    for(int i = 0; i < n; i++)
    {     
            cout << xcal[i] << setprecision(10)<<fixed<< endl;
    } 
    line();
    cout <<"The root is approximately: ";
    cout << xcal[n - 1]<< setprecision(10)<< fixed<< endl;
    line();
    cout <<"the f(x) = "<< fx(xcal[n - 1]) << setprecision(0)<<fixed<< endl;
    line();
   
    return 0;
}
double fcal(double x)
{
       return  0.5*x - sin(x);
}
double Calfalsi(double xp, double xn)
{
       return xn - fcal(xn) *(xp - xn)/(fcal(xp) -fcal(xn));
}
double fx(double x)
{
	return (x*x-4*x-10);
}
void line()
{
	cout<<"========================================================"<< endl;
}
