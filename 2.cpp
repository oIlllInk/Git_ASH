#include <iostream>
using namespace std;
int main() {
	setlocale(0, " ");

	cout << "[-] ��������� \"������� ����\"\n\n[1] ����\n[2] �����\n[3] ����\n[4] �����\n\n[-] ������� ��������: ";
	int x;
	cin >> x;
	if (x == 1) {
		cout << "[-] ����������. ������� �����.";
	}
	else if (x == 2) {
		cout << "[-] ���� ����.";
	}
	else if (x == 3) {
		cout << "[-] ������� ������.";
	}
	else if (x == 4) {
		cout << "[-] ����� ����.";
	}
	else {
		cout << "[-] ������ ������� ���� ���.";
	}

	return 0;
}