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
	cout << "������ INT - " << sizeof(int) << "�";
}
void showSizeChar() {
	cout << "������ CHAR - " << sizeof(char) << "�";
}
void showSizeDouble() {
	cout << "������ DOUBLE - " << sizeof(double) << "�";
}
void showSizeFloat() {
	cout << "������ FLOAT - " << sizeof(float) << "�";
}
void showSizeBool() {
	cout << "������ BOOL - " << sizeof(bool) << "�";
}
void showMessage() {
	cout << "������ � �������.";
}
void showSquare() {
	cout << "##########\n##########\n##########\n##########\n##########\n";
}
void showError() {
	cout << "����� ������� ���.";
}

int main() {
	setlocale(0, "");
	cout << "��������� - \"�������\"\n\n[1] �������� �������\n[2] �������� ���� ����\n[3] �������� ���� ������\n[4] ����� ������� ���� ������ INT\n[5] ����� ������� ���� ������ CHAR\n[6] ����� ������� ���� ������ DOUBLE\n[7] ����� ������� ���� ������ FLOAT\n[8] ����� ������� ���� ������ BOOL\n[9] ����� ��������� \"������ � �������\"\n[10] ����� �������� 5�5\n\n[+] ����: ";
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