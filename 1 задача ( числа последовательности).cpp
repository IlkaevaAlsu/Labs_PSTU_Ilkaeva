#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	int a, b;
	bool f = true;
	cin >> a;
	if (a != 0)
	{
		cin >> b;
		f = ((a < b) && f);
		while ((b != 0) && f)
		{
			if (a >= b)
				f = false;
			else
			{
				a = b;
				cin >> b;
			}
		}

		if (f)
			cout << "Последовательность возрастающая, закончилась нулем";
		else cout << "Условие нарушено";
	}
	else cout << "Введен 0";
	return 0;
}