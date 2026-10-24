#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "RU");
	double e = pow(10, -4), sum = 0.0;
	int n = 1;
	double a= (2.0 * n - 1.0) / pow(2.0, n);
	for (a; fabs(a) >= e; n++)
	{
		sum += a;
		a = a * (2.0 * n + 1) / (2.0 * (2.0 * n - 1.0));
	}
	cout << "Сумма ряда равна " << sum;
	return 0;
}