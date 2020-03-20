#include <iostream>
#include <cmath>

using namespace std;

double futureVal(double, double, int, int);

int main(){
	double principal, interestPercent, futureValue;
	int numCompounds, numYears;

	cout << "Amount to be invested: ";
	cin >> principal;

	cout << "Interest rate as a percent: ";
	cin >> interestPercent;

	cout << "Number of compounds per year: ";
	cin >> numCompounds;

	cout << "Number of years invested: ";
	cin >> numYears;

	futureValue = futureVal(principal, interestPercent, numCompounds, numYears);

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "The future value of your money is: " << futureValue << endl;

	return 0;
}

double futureVal(double principal, double interestPercent, int numCompounds, int numYears){
	return principal*pow(1+(interestPercent/100)/numCompounds, numCompounds*numYears);
}