#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

string getElembyInd(string mas[], int ind) {
	if (ind >= 0 and ind < mas->size()) {
		return mas[ind];
	}
	else {
		throw range_error("Index out of range\n");
	}
}


int main() {
	setlocale(LC_ALL, "rus");

	string students[10] = {
	"Иванов", "Петров", "Сидоров",
	"Ахмедов", "Ерошкин", "Выхин",
	"Андеев", "Вин Дизель", "Картошкин", "Чубайс"
	};
	cout << "Введите номер индекса, к которому хотите обратиться" << endl;
	int i;
	cin >> i;

	try {
		string res = getElembyInd(students, i);
		cout << res << endl;
	}
	catch (range_error& e) {
		cout << "Exception occurred" << endl << e.what();
	}
		
		
}
