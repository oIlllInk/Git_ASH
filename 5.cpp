#include <iostream>
using namespace std;
int main() {
	setlocale(0, " ");

	cout << "[+] ����������\n\n[1] ������� �����\n[2] ���������� �����\n\n[3] �����\n[+] ����: ";
	int x;
	cin >> x;
	switch (x) {
	case 1: {
		cout << "\n[1] ���\n[2] �����\n[3] ��������\n[4] �������\n[5] ������\n[6] ������\n[7] ������\n[8] ���\n[9] �����\n[10] ����\n[11] ����\n[12] �������\n[13] ����\n[14] ���������\n[15] ����\n[+] �������� ����� �����: ";
		cin >> x;
		switch (x) {
		case 1: {
			cout << "�������: Cat";
			break;
		}
		case 2: {
			cout << "�������: Pizza";
			break;
		}
		case 3: {
			cout << "�������: Orange";
			break;
		}
		case 4: {
			cout << "�������: Phone";
			break;
		}
		case 5: {
			cout << "�������: Three";
			break;
		}
		case 6: {
			cout << "�������: Road";
			break;
		}
		case 7: {
			cout << "�������: Car";
			break;
		}
		case 8: {
			cout << "�������: Ball";
			break;
		}
		case 9: {
			cout << "�������: Sphere";
			break;
		}
		case 10: {
			cout << "�������: Tank";
			break;
		}
		case 11: {
			cout << "�������: Window";
			break;
		}
		case 12: {
			cout << "�������: Screen";
			break;
		}
		case 13: {
			cout << "�������: Chare";
			break;
		}
		case 14: {
			cout << "�������: Bicycle";
			break;
		}
		case 15: {
			cout << "�������: Five";
			break;
		}
		default: {
			cout << "������ ����� ���";
			return 0;
		}
		}
		break;
	}
	case 2: {
		cout << "\n[1] one\n[2] two\n[3] three\n[4] four\n[5] five\n[6] six\n[7] seven\n[8] eight\n[9] nine\n[10] ten\n[11] eleven\n[12] twelve\n[13] thirteen\n[14] fourteen\n[15] fifteen\n[+] �������� ����� �����: ";
		cin >> x;
		switch (x) {
		case 1: {
			cout << "�������: ����";
			break;
		}
		case 2: {
			cout << "�������: ���";
			break;
		}
		case 3: {
			cout << "�������: ���";
			break;
		}
		case 4: {
			cout << "�������: ������";
			break;
		}
		case 5: {
			cout << "�������: ����";
			break;
		}
		case 6: {
			cout << "�������: �����";
			break;
		}
		case 7: {
			cout << "�������: ����";
			break;
		}
		case 8: {
			cout << "�������: ������";
			break;
		}
		case 9: {
			cout << "�������: ������";
			break;
		}
		case 10: {
			cout << "�������: ������";
			break;
		}
		case 11: {
			cout << "�������: �����������";
			break;
		}
		case 12: {
			cout << "�������: ����������";
			break;
		}
		case 13: {
			cout << "�������: ����������";
			break;
		}
		case 14: {
			cout << "�������: ������������";
			break;
		}
		case 15: {
			cout << "�������: ����������";
			break;
		}
		default: {
			cout << "������ ����� ���";
			return 0;
		}
		}
		break;
	}
	default: {
		return 0;
	}
	}

	return 0;
}