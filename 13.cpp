#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(0, " ");
	cout << "[+] ��������� - \"�������������� ������\"\n\n[1] �����\n[2] �������\n[3] �������������\n[4] �����������\n[5] �������\n[6] �������\n[7] ����\n\n[+] �������� ������: ";
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
	case 2: {
		cout << "[+] ������: \"�������\"\n\n[1] �����������\n[2] ������\n\n[+] �������� ���: ";
		cin >> x;
		system("cls");
		switch (x) {
		case 1: {
			cout << "[+] ������: ";
			cin >> x;
			cout << "[+] ��������: ";
			char y;
			cin >> y;
			system("cls");
			cout << "[+] ���������:\n";
			for (int i = 0; i < x; i++) {
				for (int i2 = 0; i2 < x * 2 - 2; i2++)
					cout << y;
				cout << endl;
			}
			break;
		}
		case 2: {
			cout << "[+] ������: ";
			cin >> x;
			cout << "[+] ��������: ";
			char y;
			cin >> y;
			system("cls");
			cout << "[+] ���������:\n";
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
			cout << "[-] ����� ������ ���.";
			break;
		}
		}
		break;
	}
	case 3: {
		cout << "[+] ������: \"�������������\"\n\n[1] �����������\n[2] ������\n\n[+] �������� ���: ";
		cin >> x;
		system("cls");
		switch (x) {
		case 1: {
			cout << "[+] ������: ";
			int z;
			cin >> z;
			cout << "[+] ������: ";
			cin >> x;
			cout << "[+] ��������: ";
			char y;
			cin >> y;
			system("cls");
			cout << "[+] ���������:\n";
			for (int i = 0; i < x; i++) {
				for (int i2 = 0; i2 < z * 2 - 2; i2++)
					cout << y;
				cout << endl;
			}
			break;
		}
		case 2: {
			cout << "[+] ������: ";
			int z;
			cin >> z;
			cout << "[+] ������: ";
			cin >> x;
			cout << "[+] ��������: ";
			char y;
			cin >> y;
			system("cls");
			cout << "[+] ���������:\n";
			for (int i = 0; i < x; i++) {
				for (int i2 = 0; i2 < z * 2 - 2; i2++)
					if (i == 0 || i == x - 1 || i2 == 0 || i2 == z * 2 - 3) {
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
			cout << "[-] ����� ������ ���.";
			break;
		}
		}
		break;
	}
	case 4: {
		cout << "[+] ������: \"�����������\"\n\n[1] �����������\n[2] ������\n\n[+] �������� ���: ";
		cin >> x;
		system("cls");
		switch (x) {
		case 1: {
			cout << "[+] ������: ";
			int x;
			cin >> x;
			cout << "[+] ��������: ";
			char y;
			cin >> y;
			system("cls");
			cout << "[+] ���������:\n";
			for (int i = 0; i < x / 2 + 1; i++) {
				for (int i2 = 0; i2 < x; i2++) {
					if (i2 >= x / 2 - i && i2 <= x / 2 + i || i == x / 2)
						cout << y;
					else
						cout << " ";
				}
				cout << endl;
			}
			break;
		}
		case 2: {
			cout << "[+] ������: ";
			int x;
			cin >> x;
			cout << "[+] ��������: ";
			char y;
			cin >> y;
			system("cls");
			cout << "[+] ���������:\n";
			for (int i = 0; i < x / 2 + 1; i++) {
				for (int i2 = 0; i2 < x; i2++) {
					if (i2 == x / 2 - i || i2 == x / 2 + i || i == x / 2)
						cout << y;
					else
						cout << " ";
				}
				cout << endl;
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
	case 5: {
		cout << "[+] ������: \"�������\"\n\n[+] ������: ";
		cin >> x;
		cout << "[+] ��������: ";
		char y;
		cin >> y;
		system("cls");
		cout << "[+] ���������:\n";
		for (int i = 1; i < x + 1; i++) {
			for (int i2 = 1; i2 < x + 1; i2++) {
				if (i % 2 == 0 || i2 % 2 == 0)
					cout << y << " ";
				else
					cout << ". ";
			}
			cout << endl;
		}
		break;
	}
	case 6: {
		cout << "[+] ������: \"�������\"\n\n[+] ������: ";
		cin >> x;
		cout << "[+] ��������: ";
		char y;
		cin >> y;
		system("cls");
		cout << "[+] ���������:\n";
		for (int i = 0; i < x; i++) {
			for (int i2 = 0; i2 < x; i2++) {
				if (i == i2 || i2 == x - i - 1)
					cout << y << " ";
				else
					cout << ". ";
			}
			cout << endl;
		}
		break;
	}
	case 7: {
		cout << "[+] ������: \"����\"\n\n[+] ������: ";
		cin >> x;
		cout << "[+] ��������: ";
		char y;
		cin >> y;
		system("cls");
		cout << "[+] ���������:\n";
		for (int i = 0; i < x; i++) {
			for (int i2 = 0; i2 < x; i2++) {
				if (i == x / 2 || i2 == x / 2)
					cout << y << " ";
				else
					cout << ". ";
			}
			cout << endl;
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