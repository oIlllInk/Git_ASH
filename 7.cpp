#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(0, " ");
	cout << "[+] Программа - \"Геометрические фигуры\"\n\n[1] Линия\n\n[+] Выберите фигуру: ";
	int x;
	cin >> x;
	system("cls");
	switch (x) {
	case 1: {
		cout << "[+] Фигура: \"Линия\"\n\n[1] Горизонтальная\n[2] Вертикальная\n\n[+] Ввод: ";
		cin >> x;
		system("cls");
		switch (x) {
		case 1: {
			char y;
			cout << "[+] Длина линии: ";
			cin >> x;
			cout << "[+] Текстура: ";
			cin >> y;
			system("cls");
			cout << "[+] Результат:\n";
			while (x > 0) {
				cout << y;
				x--;
			}
			break;
		}
		case 2: {
			char y;
			cout << "[+] Длина линии: ";
			cin >> x;
			cout << "[+] Текстура: ";
			cin >> y;
			system("cls");
			cout << "[+] Результат:\n";
			while (x > 0) {
				cout << y << endl;
				x--;
			}
			break;
		}
		default: {
			cout << "[-] Такой фигуры нет.";
			break;
		}
		}
		break;
	}
	default: {
		system("cls");
		cout << "[-] Такой фигуры нет.";
		break;
	}
	}
	return 0;
}