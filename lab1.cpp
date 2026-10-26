#include <iostream>
#include <math.h>
#include <locale>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	//float
	float a1 = 100.0f;
	float b1 = 0.001f;

	float d_1 = pow(a1 + b1, 4);//первое действие, в числителе
	cout << "результат первого действия " << d_1 << endl;
	float d_2 = pow(a1, 4) + 4 * pow(a1, 3) * b1 + 6 * pow(a1, 2) * pow(b1, 2);//второе действие, в числителе
	cout << "результат второго действия " << d_2 << endl;
	float d_3 = d_1 - d_2;//результат в числителе
	cout << "результат третьего действия " << d_3 << endl;
	float d_4 = 4 * a1 * pow(b1, 3) + pow(b1, 4);// результат в знаменателе
	cout << "результат четвертого действия " << d_4 << endl;
	float result1 = d_3 / d_4;// числитель делим на знаменатель
	cout << "Результат с типом float: " << result1 << endl;

	//double
	double a2 = 100.0;
	double b2 = 0.001;

	double d_1_2 = pow(a2 + b2, 4);//первое действие, в числителе
	cout << "результат первого действия " << d_1_2 << endl;
	double d_2_2 = pow(a2, 4) + 4 * pow(a2, 3) * b2 + 6 * pow(a2, 2) * pow(b2, 2);//второе действие, в числителе
	cout << "результат второго действия " << d_2_2 << endl;
	double d_3_2 = d_1_2 - d_2_2;//результат в числителе
	cout << "результат третьего действия " << d_3_2 << endl;
	double d_4_2 = 4 * a2 * pow(b2, 3) + pow(b2, 4);// результат в знаменателе
	cout << "результат четвертого действия " << d_4_2 << endl;
	double result2 = d_3_2 / d_4_2;// числитель делим на знаменатель
	cout << "Результат с типом double: " << result2 << endl;
	

	return 0;
}