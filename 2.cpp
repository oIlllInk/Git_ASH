#include <iostream>
using namespace std;
int main() {
	setlocale(0, " ");

	cout << "[-] Программа \"Времена года\"\n\n[1] Лето\n[2] Осень\n[3] Зима\n[4] Весна\n\n[-] Введите значение: ";
	int x;
	cin >> x;
	if (x == 1) {
		cout << "[-] Раздевайся. Сегодня тепло.";
	}
	else if (x == 2) {
		cout << "[-] Бери зонт.";
	}
	else if (x == 3) {
		cout << "[-] Оденься теплее.";
	}
	else if (x == 4) {
		cout << "[-] Птицы орут.";
	}
	else {
		cout << "[-] Такого времени года нет.";
	}

	return 0;
}