#include <iostream>
using namespace std;
int main() {
	setlocale(0, " ");

	cout << "[1] ����\n[2] �����\n[3] ������\n[4] ��������\n[5] �������\n";
	float x, y;
	int z, w;
	cin >> z;
	if (z == 1) {
		cout << "������ �����: ";
		cin >> x;
		cout << "������ �����: ";
		cin >> y;
		cout << "[+] ���������: " << x << " + " << y << " = " << x + y;
	}
	else if (z == 2) {
		cout << "������ �����: ";
		cin >> x;
		cout << "������ �����: ";
		cin >> y;
		cout << "[+] ���������: " << x << " - " << y << " = " << x - y;
	}
	else if (z == 3) {
		cout << "������ �����: ";
		cin >> x;
		cout << "������ �����: ";
		cin >> y;
		if (y == 0) {
			cout << "������ �� 0 ������.";
			return 0;
		}
		cout << "[+] ���������: " << x << " / " << y << " = " << x / y;
	}
	else if (z == 4) {
		cout << "������ �����: ";
		cin >> x;
		cout << "������ �����: ";
		cin >> y;
		cout << "[+] ���������: " << x << " * " << y << " = " << x * y;
	}
	else if (z == 5) {
		cout << "������ �����: ";
		cin >> z;
		cout << "������ �����: ";
		cin >> w;
		cout << "[+] ���������: " << z << " % " << w << " = " << z % w;
	}
	else {
		cout << "������ ����� ���.";
	}

	return 0;
}