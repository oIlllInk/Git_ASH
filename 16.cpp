#include <iostream>
using namespace std;

void removeText() {
	system("cls");
}
void changeColourBackground() {
	system("color 90");
}
void changeColourText() {
	system("color 03");
}
void showSizeInt() {
	cout << "Размер INT - " << sizeof(int) << "б";
}
void showSizeChar() {
	cout << "Размер CHAR - " << sizeof(char) << "б";
}
void showSizeDouble() {
	cout << "Размер DOUBLE - " << sizeof(double) << "б";
}
void showSizeFloat() {
	cout << "Размер FLOAT - " << sizeof(float) << "б";
}
void showSizeBool() {
	cout << "Размер BOOL - " << sizeof(bool) << "б";
}
void showMessage() {
	cout << "Привет я функция.";
}
void showSquare() {
	cout << "##########\n##########\n##########\n##########\n##########\n";
}
void showError() {
	cout << "Такой функции нет.";
}

int main() {
	setlocale(0, "");
	cout << "Программа - \"Функции\"\n\n[1] Очищение консоли\n[2] Изменить цвет фона\n[3] Изменить цвет текста\n[4] Вывод размера типа данных INT\n[5] Вывод размера типа данных CHAR\n[6] Вывод размера типа данных DOUBLE\n[7] Вывод размера типа данных FLOAT\n[8] Вывод размера типа данных BOOL\n[9] Вывод сообщения \"Привет я функция\"\n[10] Вывод квадрата 5х5\n\n[+] Ввод: ";
	int x;
	cin >> x;
	system("cls");
	switch (x) {
	case 1: {
		removeText();
		break;
	}
	case 2: {
		changeColourBackground();
		break;
	}
	case 3: {
		changeColourText();
		break;
	}
	case 4: {
		showSizeInt();
		break;
	}
	case 5: {
		showSizeChar();
		break;
	}
	case 6: {
		showSizeDouble();
		break;
	}
	case 7: {
		showSizeFloat();
		break;
	}
	case 8: {
		showSizeBool();
		break;
	}
	case 9: {
		showMessage();
		break;
	}
	case 10: {
		showSquare();
		break;
	}
	default: {
		showError();
		break;
	}
	}
	return 0;
}