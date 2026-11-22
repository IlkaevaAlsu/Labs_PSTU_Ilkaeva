#include <iostream>
using namespace std;

int q[8];

bool can(int i, int j) 
{
    for (int k = 0; k < j; k++) 
    {
        if (q[k] == i|| q[k] - k == i - j|| q[k] + k == i + j )
            return false;
    }
    return true;
}

void show()
{
    cout << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (q[j] == i)
                cout << "1 ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

bool solve(int j)
{
    if (j == 8) 
    {
        show();
        return true;
    }

    if (j == 3) 
    {
        if (can(0, 3))
        {
            q[3] = 0;
            if (solve(4)) 
                return true;
        }
        return false;
    }

    for (int i = 0; i < 8; i++)
    {
        if (can(i, j)) 
        {
            q[j] = i;
            if (solve(j + 1))
                return true;
        }
    }
    return false;
}

int main() 
{
    solve(0);
    return 0;
}