#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(0, " ");
	cout << "[+] ��������� - \"�������������� ������\"\n\n[1] �����\n\n[+] �������� ������: ";
	int x;
	cin >> x;
	system("cls");
	switch (x) {
	case 1: {
		cout << "[+] ������: \"�����\"\n\n[1] ��������������\n[2] ������������\n\n[+] ����: ";
		cin >> x;
		system("cls");
		switch (x) {
		case 1: {
			char y;
			cout << "[+] ����� �����: ";
			cin >> x;
			cout << "[+] ��������: ";
			cin >> y;
			system("cls");
			cout << "[+] ���������:\n";
			while (x > 0) {
				cout << y;
				x--;
			}
			break;
		}
		case 2: {
			char y;
			cout << "[+] ����� �����: ";
			cin >> x;
			cout << "[+] ��������: ";
			cin >> y;
			system("cls");
			cout << "[+] ���������:\n";
			while (x > 0) {
				cout << y << endl;
				x--;
			}
			break;
		}
		default: {
			cout << "[-] ����� ������ ���.";
			break;
		}
		}
		break;
	}
	default: {
		system("cls");
		cout << "[-] ����� ������ ���.";
		break;
	}
	}
	return 0;
}