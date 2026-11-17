#include <iostream>
using namespace std;

int main() {
    int n;
    cout « "Введите размер массива: ";
    cin » n;
    
    int a[n];
    
    cout « "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin » a[i];
    }

    for (int i = 1; i < n; i++) {
        int K = a[i];
        int j = i - 1;
        bool f = false; 

        while (j >= 0 && !f) {
            if (a[j] > K) {
                a[j + 1] = a[j];
                j = j - 1;
            } else {
                f = true;
            }
        }

        a[j + 1] = K;
    }

    cout « "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
        cout « a[i] « " ";
    }
    cout « endl;

    return 0;
}
