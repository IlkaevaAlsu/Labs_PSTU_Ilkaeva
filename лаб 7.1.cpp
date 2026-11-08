#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

string info(int year)//создаем функцию, которая по номеру года выдает по старояпонскому календарю год какого животного
{
	const string animals[12] = { "крыса","бык","тигр","кролик","дракон","змея","лошадь","овца","обезьяна","петух","собака","кабан" };//создаем массив из 12 животных, const чтобы не изменить массив
	int num = (((year - 4) % 12)+12)%12;//формула для любого года, даже если введем год меньше 4
    return animals[num];
}

string info(const string &month)//создаем функцию, которая по названию месяца выдает знак зодиака. используем ссылку, чтобы не копировать значение, а работать с оригиналом
{
   
    if (month == "январь")
    {
        return "Козерог/Водолей";
    }
    if (month == "февраль")
    {
        return "Водолей/Рыбы";
    }
    if (month == "март")
    {
        return "Рыбы/Овен";
    }
    if (month == "апрель")
    {
        return "Овен/Телец";
    }
    if (month == "май")
    {
        return "Телец/Близнецы";
    }
    if (month == "июнь")
    {
        return "Близнецы/Рак";
    }
    if (month == "июль")
    {
        return "Рак/Лев";
    }
    if (month == "август")
    {
        return "Лев/Дева";
    }
    if (month == "сентябрь")
    {
        return "Дева/Весы";
    }
    if (month == "октябрь")
    {
        return "Весы/Скорпион";
    }
    if (month == "ноябрь")
    {
        return "Скорпион/Стрелец";
    }
    if (month == "декабрь")
    {
        return "Стрелец/Козерог";
    }
    else return"не определен";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int year;
    string month;
    cout << "Введите год: ";
    cin >> year;
    cout << "Год по старояпонскому календарю: "<<info(year)<<endl;

    cout << "Введите название месяца: ";
    cin >> month;
    cout << "Знак зодиака: "<<info(month);
    return 0;
}
