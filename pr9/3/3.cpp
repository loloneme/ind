#include <iostream>
#include <ctime>

using namespace std;

template <typename Atype>
class Set
{
private:
    Atype* a ;
    int len;
public:
    Set(int size) {
        this->a = new Atype[size];
        this->len = size;
        for (int i = 0; i < len; i++) {
            a[i] = 0;
        }
    }

    ~Set() {
        delete[]a;
    }
    bool Is_Empty() {
        for (int i = 0; i < len; i++) {
            if (a[i] == NULL) {
                return false;
            }
        }
        return true;
    }

    bool Is_Full() {
        for (int i = 0; i < len; i++) {
            if (a[i] == NULL) {
                return false;
            }
        }
        return true;
    }

    bool Add(Atype T) {
        if (Is_Full()) {
            cout << "Множество заполнено, нельзя добавить новый элемент!\n";
            return false;
        }
        if (In_Set(T)) {
            cout << "Элемент уже присутствует в множестве!\n";
            return false;
        }
        int i = 0;
        while (a[i] != 0) {
            i++;
        }
        a[i] = T;
        return true;
    }

    bool In_Set(Atype T) {
        if (!Is_Empty()) {
            for (int i = 0; i < len; i++) {
                if (a[i] == T) {
                    return true;
                }
            }
        }
        return false;
    }
    Atype Get(Atype T) {
        if (In_Set(T)) {
            for (int i = 0; i < len; i++) {
                if (a[i] == T) {
                    Atype elem = a[i];
                    a[i] = NULL;
                    return elem;
                }
            }
        }
        cout << "Такого элемента в множестве нет\n";
        return NULL;
    }

    void Print() {
        for (int i = 0; i < len; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};



int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    Set <int> numbers(6);
    numbers.Print();
    for (int i = 0; i < 6; i++) {
        bool b = numbers.Add(1 + rand() % 10);
    }
    numbers.Print();
    if (numbers.Is_Empty()) {
        cout << "Множество пустое\n";
    }
    else {
        cout << "Множество не пустое\n";
    }
    if (numbers.Is_Full()) {
        cout << "Множество полное\n";
    }
    else {
        cout << "Множество не полное\n";
    }

    cout << numbers.In_Set(5) << endl;
    cout << numbers.In_Set(132) << endl;
    int a = numbers.Get(3);
    numbers.Print();
}
