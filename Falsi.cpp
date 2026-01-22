#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

//Constant definition
#define LIMIT  1000

//Function prototypes
double Fx (double);
double FCalc (double);
double Falsi (double, double); 
void   Line ();

//Variables
double x_Calc [LIMIT];
double x_Pos [LIMIT];
double x_Neg [LIMIT];
int range;
int i;

int main()
{
	cout << "\tBy Leslie Caye Shu"
		 << "\n\tBSCpE Freshmen"
		 << "\n\tProgramming Logic and Design"
		 << "\n\n\t\t *~~~~~*~~~~~*~~~~~*~~~~~*~~~~~*~~~~~*~~~~~*~~~~~*~~~~~*"
		 << "\n\t\t\t\t   REGULA FALSI METHOD"
		 << "\n\t\t\t\t\t   OR"
		 << "\n\t\t\t\t  FALSE POSITION METHOD"
		 << "\n\t\t *~~~~~*~~~~~*~~~~~*~~~~~*~~~~~*~~~~~*~~~~~*~~~~~*~~~~~*"
		 << endl << endl <<endl;
    
    cout << "Enter POSITIVE Value: ";
    cin >> x_Pos [0];
    cout << endl;

    cout << "Enter NEGATIVE Value: ";
    cin >> x_Neg [0];
    cout << endl;

    cout << "Maximum Iteration: ";
    cin >> range;
	cout << endl;    
    
    for(i = 0; i < range; i++)
	{
		x_Calc [i] = Falsi (x_Pos[i], x_Neg [i]);
    	
        if(FCalc(x_Calc [i]) > 0)
		{
            x_Pos [i+1] = x_Calc [i];
            x_Neg [i+1] = x_Neg [i];
        }
        else if(FCalc(x_Calc [i])< 0)
        {
            x_Neg [i+1] = x_Calc [i];
            x_Pos [i+1] = x_Pos [i];
        }
        else
        {
            x_Neg [i+1] = x_Neg [i];
            x_Pos [i+1] = x_Pos [i];
        }
    }
    
    for(i = 0; i < range; i++)
    {     
        cout << x_Calc [i]
			 << setprecision(10)
			 << fixed 
			 << endl;
    }
    Line();
    
	cout << "\tROOT is Approximately "
    	 << x_Calc[range - 1]
		 << setprecision(10)
		 << fixed;
	Line();

    return 0;
}


double FCalc(double x)
{
    return  0.5 * x - sin (x);
}


double Falsi(double x_P, double x_N)
{ 
    return x_N - FCalc (x_N) * (x_P - x_N) / (FCalc (x_P) - FCalc (x_N));
}

void Line()
{
    cout << "\n\n*~~~~~*~~~~~*~~~~~*~~~~~*~~~~~*~~~~~*~~~~~*~~~~*~~~~~~*\n\n";
}

