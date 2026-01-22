#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
const int MAX = 1000;
double funX (double),funC (double),regF (double,double);
double pv[MAX],nv[MAX],xc[MAX];
int e;
void mainlist();
void line();
void developer();
double funC(double x0)
{	
     return  0.5*x0 - sin(x0);
}

double regF(double x1, double x2)
{
	 return x2 - funC(x2) *(x1 - x2)/(funC(x1) -funC(x2));
}

double funX(double x0)
{
	 return (x0*x0-4*x0-10);
}

void mainlist()
{

	 cout << "-----------| Regula Falsi |-----------\n\n";
	 cout << " Enter POSITIVE value: ";
	 cin >> pv[0];
	 cout << " Enter NEGATIVE value: ";
	 cin >> nv[0];
	 cout << " Enter MAXIMUM range for Tolerance: ";
	 cin >> e;
	 
	 for (int i = 0; i < e; i++)
	 {
		 xc[i] = regF (pv[i], nv[i]);
	 	  	 	 
   	 if(funC(xc[i])> 0)
	 {
    	 pv[i+1] = xc[i];
   		 nv[i+1] = nv[i];
     }
     else
	 {
    	 nv[i+1] = xc[i];
    	 pv[i+1] = pv[i];
     }
     }
         
     for(int i = 0; i < e; i++)
     {     
         cout << xc[i] << setprecision(10)<<fixed<< endl;
     } 
         
         line();
	     cout <<"The root is: ";
		 cout << xc[e - 1]<< setprecision(10)<< fixed<< endl;
		 line();
		 cout <<"the f(x) = "<< funX(xc[e - 1]) << setprecision(0)<<fixed<< endl;
		 line();	 
}


 void line()
 {
 	 cout << "\n----------------------------------------\n";
 }
 void developer()
 {
 	 cout << "Christian Dave Crisostomo" << endl;
 	 cout << "CPE112L(786)" << endl;
 }
 
int main()
{
	mainlist();
	system("pause");

}
