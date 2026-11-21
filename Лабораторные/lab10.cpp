#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(0));
	int n;
	cout << "введите количество строк: ";
	cin >> n;
	int m;
	cout << "введите количество столбцов: ";
	cin >> m;

	int** matr = new int* [n];//создаем двумерный ДМ

	for (int i = 0;i < n;++i)//заолняем элементы случайными числами в диапазоне от -10 до 10
	{
		matr[i] = new int[m];
		for (int j = 0;j < m;++j)
		{
			matr[i][j] = rand() % 21 - 10;
		}
	}

	cout << "массив: ";//выводим исходный массив
	for (int i = 0;i < n;++i)
	{
		for (int j = 0; j < m;++j)
		{
			cout << matr[i][j] << " ";
		}
		cout << endl;
	}

	int s;
	cout << "введите номер строки для вставки: ";//вводим номер строки, на которую встанет новая строка
	cin >> s;

	if (s > n)//проверяем, чтобы номер не был больше количества строк
	{
		cout << "неверный номер";
		for (int i = 0;i < n;++i)
		{
			delete[] matr[i];
		}
		delete[] matr;
		return 1;
	}

	int* newstr = new int[m];//создаем новую строку с m столбцами
	for (int j = 0;j < m;++j)// заполняем эту строку
	{
		newstr[j] = rand() % 21 - 10;
	}

	int** newmatr = new int*[n + 1];//создаем новый ДМ на 1 строку больше
	for (int i = 0;i < s;++i)//копируем все строки в новую матрицу из старой с 1 до s строки, не включая s строку
	{
		newmatr[i] = matr[i];
	}

	newmatr[s-1] = newstr;//в новую матрицу вствляем новую строку

	for (int i = s-1;i < n;++i)//копируем оставшиеся строки из старой матрицы в новую
	{
		newmatr[i + 1] = matr[i];
	}

	delete[] matr;//удаляем старую матрицу, оставляя строки

	cout << "новая матрица: ";// выводим новую матрицу
	for (int i = 0; i < n + 1; i++) 
	{
		for (int j = 0; j < m; j++)
			cout << newmatr[i][j]<<" ";
		cout << endl;
	}

	for (int i = 0;i < n+1;++i)
	{
		delete[] newmatr[i];//удаляем сначала строки
	}
	delete[] newmatr;//потом удаляем саму новую матрицу
	return 0;
}