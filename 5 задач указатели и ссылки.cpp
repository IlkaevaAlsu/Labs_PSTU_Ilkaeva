#include <iostream>
using namespace std;

int main() {
    // задача 1
    {
        int a = 10, b = 20;   
        int& r = a;           // r — ссылка на a
        r = b;                // a = b = 20
        r++;                  // a = 21
        cout << a << " " << b << endl;   // 21 20
    }

    // задача 2
    {
        int a = 12;           
        int* ptr = &a;        // ptr указывает на а
        int copy = *ptr;      // copy = 12 
        (*ptr)++;             // a = 13
        cout << a << " " << copy << endl;  // 13 12
    }

    // задача 3
    {
        int a = 4, b = 9;     
        int* p = &a;          // p указывает на a
        int* q = p;           // q указывает на a 
        int& r = *p;          // r — ссылка на a
        p = &b;               // p указывает на b
        *q += *p;             // a = a+b=4+9=13
        *p = r - 3;           // b = a - 3 = 10
        q = p;                // q = p = b =10
        *q += r;              // b=b+r=10+13=23
        cout << a << " " << b << " " << r << endl;  // 13 23 13
    }

    // задача 4
    {
        int a = 5, b = 8;     
        int& r = a;           // r указывает на a
        int& s = a;           // s указвает на a 
        int copy = a;         // copy = 5 
        r = b;                // a = 8
        s += 2;               // a = 10
        b = copy;             // b = 5
        cout << a << " " << b << " " << r << " " << s << " " << copy << endl;  // 10 5 10 10 5
    }

    // задача 5
    {
        int a = 2, b = 5, c = 8;  
        int* p = &a;          // p указывает на a
        int& r = a;           // r — ссылка на a
        int copy = *p;        // copy = а = 2 
        *p = b;               // a = 5
        p = &c;               // p указывает на c
        r = *p;               // a = c = 8 
        *p = b + copy;        // c = 5 + 2 = 7
        p = &b;               // p указывает на b
        *p = r - copy;        // b = 8 - 2 = 6
        r++;                  // a = 9
        cout << a << " " << b << " " << c << " " << copy << endl;  // 9 6 7 2
    }

    return 0;
}