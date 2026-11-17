#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Введите размер массива n: ";
    cin >> n;
    int a[n];
    cout<< "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) { 
        cin >> a[i];
    }

    cout<< "Вы ввели: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}