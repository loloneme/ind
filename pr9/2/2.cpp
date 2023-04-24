#include <iostream>
#include <string>

using namespace std;

template <class T> void Swap(T& x, T& y) {
    T z = x;
    x = y;
    y = z;
}

template <typename T> void Sort(T& a, bool reversed, int n) {
    if (reversed == false) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1])
                    Swap(a[j], a[j + 1]);
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] < a[j + 1])
                    Swap(a[j], a[j + 1]);
            }
        }
    }
}

template <typename T> void print(T& x, int size){
    for (int i = 0; i < size; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}


int main()
{
    setlocale(LC_ALL, "rus");
    int n, m;
    cout << "Введите количество элементов в массиве: ";
    cin >> n;
    int* numbers = new int[n];
    cout << "Введите числа в массиве: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    Sort(numbers, true, n);
    print(numbers, n);
    Sort(numbers, false, n);
    print(numbers, n);

    cout << "Введите количество элементов в массиве: ";
    cin >> m;
    string* strings = new string[m];
    cout << "Введите строки в массиве: ";
    for (int i = 0; i < m; i++) {
        cin >> strings[i];
    }
    Sort(strings, true, m);
    print(strings, m);
    Sort(strings, false, m);
    print(strings, m);
}
