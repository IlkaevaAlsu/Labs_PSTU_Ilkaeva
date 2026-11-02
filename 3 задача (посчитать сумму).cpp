#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	int n, i, j, a, s = 0;
	cin >> n;
	for (i = 1;i <= n;++i)
	{
		a = 1;
		for (j = i;j <= 2 * i;++j)
		{
			a *= j;
		}
		s += a;
	}
	cout << "S= " << s;
	return 0;
}