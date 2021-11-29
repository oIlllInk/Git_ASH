#include <iostream>
using namespace std;
int main() {
	setlocale(0, " ");

	cout << "[1] Плюс\n[2] Минус\n[3] Делить\n[4] Умножить\n[5] Остаток\n";
	float x, y;
	int z, w;
	cin >> z;
	if (z == 1) {
		cout << "Первое число: ";
		cin >> x;
		cout << "Второе число: ";
		cin >> y;
		cout << "[+] Результат: " << x << " + " << y << " = " << x + y;
	}
	else if (z == 2) {
		cout << "Первое число: ";
		cin >> x;
		cout << "Второе число: ";
		cin >> y;
		cout << "[+] Результат: " << x << " - " << y << " = " << x - y;
	}
	else if (z == 3) {
		cout << "Первое число: ";
		cin >> x;
		cout << "Второе число: ";
		cin >> y;
		if (y == 0) {
			cout << "Делить на 0 нельзя.";
			return 0;
		}
		cout << "[+] Результат: " << x << " / " << y << " = " << x / y;
	}
	else if (z == 4) {
		cout << "Первое число: ";
		cin >> x;
		cout << "Второе число: ";
		cin >> y;
		cout << "[+] Результат: " << x << " * " << y << " = " << x * y;
	}
	else if (z == 5) {
		cout << "Первое число: ";
		cin >> z;
		cout << "Второе число: ";
		cin >> w;
		cout << "[+] Результат: " << z << " % " << w << " = " << z % w;
	}
	else {
		cout << "Такого знака нет.";
	}

	return 0;
}