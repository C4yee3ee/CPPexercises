#include <iostream>
#include <iomanip>
using namespace std;

double Calc_Ave(double& T_Score,int& count)
{
	double AveScore = 0.0;
	AveScore = T_Score / count ;
	return AveScore;
}

void Average(double& AveScore)
{
	cout << " \nAverage Score is: "
		 << setprecision(1)
	     << showpoint
	     << fixed
		 << AveScore ;
}

void getTestScores(double& t_Score, double& T_Score, int& count)
{

	while(t_Score != -1)
	{
		cout << "\nEnter test score: ";
		cin >> t_Score;
		
		if(t_Score != -1)
		{
			T_Score += t_Score;
			cout << T_Score;
			count++;
			cout << " \nTest Score Num. "
				 << count
				 << " : "
				 << T_Score;
		}
	}
}

int main()
{
	cout << "\tBy Leslie Caye Shu"
		 << endl;
	
	double t_Score = 0.0, T_Score = 0.0;
	int count;
	
	getTestScores(t_Score, T_Score, count);
	double AveScore = Calc_Ave(T_Score,count);
	Average(AveScore);
	return 0;
}
