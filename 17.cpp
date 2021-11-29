#include <iostream>
using namespace std;

double calc(double x, double y, char z) {
	switch (z) {
	case '+': {
		return x + y;
		break;
	}
	case '-': {
		return x - y;
		break;
	}
	case '/': {
		return x / y;
		break;
	}
	case '*': {
		return x * y;
		break;
	}
	case '%': {
		return (int)x % (int)y;
		break;
	}
	case '1': {
		return x + y * 10;
		break;
	}
	case '2': {
		return x + y * 20;
		break;
	}
	case '3': {
		return x + y * 30;
		break;
	}
	default: {
		return 0;
	}
	}
}

int main() {
	setlocale(0, " ");
	cout << "[+] �����������\n\n[+] ������� ������ �����: ";
	double x;
	cin >> x;
	cout << "[+] ������� ������ �����: ";
	double y;
	cin >> y;
	cout << "[+] ��������: ";
	char z;
	cin >> z;
	cout << "[+] ���������: " << calc(x, y, z);
	return 0;
}