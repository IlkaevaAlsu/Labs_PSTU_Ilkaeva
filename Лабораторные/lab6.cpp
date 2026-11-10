#include <iostream>
#include <string>
#include <cctype>
#include <clocale>

using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	string s;
	cout << "Введите строку: ";//вводим строку s
	getline(cin, s);
	string d = "";//создаем пустую строку d, где будем хранить цифры из строки s
	
	for (int i = 0;i < (int)s.size(); ++i)//проходимся по строке s
	{
		if (isdigit(s[i]))
		{
			d = d + s[i];//если символ - цифра, то кладем ее в строку d
		}
	}
	
	for (int i = 0;i < (int)d.size() - 1;++i)//сортируем строку d по убыванию методом пузырька
	{
		for (int j = 0; j < (int)d.size() - 1 - i;++j)
		{
			if (d[j] < d[j + 1])
			{
				char m = d[j];
				d[j] = d[j + 1];
				d[j + 1] = m;
			}
		}
	}

	int k = 0;//переменная в качестве индекса в строке d
	for (int i = 0; i < (int)s.size(); i++)//проходимся по строке s
		if (isdigit(s[i]))
			s[i] = d[k++];//если символ - цифра, то она принимает значение цифры из строки d с индексом k, к увеличиваем на 1

	cout << s << endl;//выводим строку s
	return 0;
}
