#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* arr = new int[size];
    int* ptr = arr;
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < size; ++i) {
        cin >> *(ptr + i); 
    }

    ptr = arr; 
    while (ptr < arr + size) {
        if (*ptr % 2 == 0) {
            if (ptr == arr) { 
                *ptr = 0;
            }
            else if (ptr == arr + size - 1) { 
                *ptr = 0;
            }
            else { 
                *ptr = *(ptr - 1) + *(ptr + 1);
            }
        }
        ++ptr;
    }

    cout << "Массив после замены: ";
    for (ptr = arr; ptr < arr + size; ++ptr) {
        cout << *ptr << " ";
    }
    cout << "\n";

    delete[] arr;
    return 0;
}
