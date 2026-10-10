#include <iostream>
#include <clocale>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	int n,m;
	cout << "введите значение n: ";// вводим значение n
	cin >> n;
	cout << "введите значение m: ";// вводим значение m
	cin >> m;
	
	int result1 = n++ - m;//из n вычитаем m, увеличиваем n на 1
	cout <<"1) "<< result1<<",n= "<<n <<",m= " << m<<"\n";

	bool result2 = m-- > n;//если m больше n, то выведется 1, иначе 0. уменьшаем значение m на 1
	cout << "2) " << result2<< ",n= " << n << ",m= " << m << "\n";

	bool result3 = n-- > m;// если n больше m, то выведется 1, иначе 0. уменьшаем значение n на 1
	cout << "3) " << result3<< ",n= " << n << ",m= " << m << "\n";

	return 0;
}