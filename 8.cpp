#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(0, " ");
	cout << "[+] Программа - \"Геометрические фигуры\"\n\n[1] Линия\n[2] Квадрат\n\n[+] Выберите фигуру: ";
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
	case 2: {
		cout << "[+] Фигура: \"Квадрат\"\n\n[1] Заполненный\n[2] Пустой\n\n[+] Выберите тип: ";
		cin >> x;
		system("cls");
		switch (x) {
		case 1: {
			cout << "[+] Размер: ";
			cin >> x;
			cout << "[+] Текстура: ";
			char y;
			cin >> y;
			system("cls");
			cout << "[+] Результат:\n";
			for (int i = 0; i < x; i++) {
				for (int i2 = 0; i2 < x * 2 - 2; i2++)
					cout << y;
				cout << endl;
			}
			break;
		}
		case 2: {
			cout << "[+] Размер: ";
			cin >> x;
			cout << "[+] Текстура: ";
			char y;
			cin >> y;
			system("cls");
			cout << "[+] Результат:\n";
			for (int i = 0; i < x; i++) {
				for (int i2 = 0; i2 < x * 2 - 2; i2++)
					if (i == 0 || i == x - 1 || i2 == 0 || i2 == x * 2 - 3) {
						cout << y;
					}
					else {
						cout << " ";
					}
				cout << endl;
			}
			break;
		}
		default: {
			cout << "[-] Такой фигуры нет.";
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