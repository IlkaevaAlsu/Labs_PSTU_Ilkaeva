#include <iostream>
using namespace std;

int n = 5;// количество дисков
int st[3][5];// стержни: st[t][level] — размер диска на стержне t, уровень level (0 — низ)
int cnt[3] = { 0, 0, 0 };// сколько дисков сейчас на стержне t

void print() 
{
    cout << "\n";
    for (int level = n - 1; level >= 0; level--)
    {
        for (int t = 0; t < 3; t++)
        {
            if (level < cnt[t])
            { 
                int d = st[t][level];//размер диска
                int stars = 2 * d - 1;// ширина диска в звёздочках
                int left = (2 * n - 1 - stars) / 2;// отступ слева для центрирования
                for (int i = 0; i < left; i++) 
                    cout << ' ';
                for (int i = 0; i < stars; i++)
                    cout << '*';
                for (int i = 0; i < left; i++) 
                    cout << ' ';
            }
            else 
            {
                for (int i = 0; i < 2 * n - 1; i++) 
                    cout << ' ';
            }
            cout << "  ";  
        }
        cout << "\n";
    }
}

void move(int from, int to) 
{
    int d = st[from][cnt[from] - 1];// верхний диск стержня from (индекс cnt[from]-1)
    cnt[from]--;// снимаем его со стержня from
    st[to][cnt[to]] = d;// кладём на первую свободную ячейку стержня to
    cnt[to]++;// учитываем диск на стержне to
    print();
}

void hanoi(int k, int from, int to, int aux) 
{
    if (k == 0) 
        return;
    hanoi(k - 1, from, aux, to);// k-1 меньших дисков убираем на aux
    move(from, to);// самый большой диск переносим на to
    hanoi(k - 1, aux, to, from);// k-1 меньших возвращаем с aux на to
}

int main()
{
    for (int i = 0; i < n; i++)
    {
        st[0][i] = n - i;
    }
    cnt[0] = n; 
    print();
    hanoi(n, 0, 2, 1);
    return 0;
}