#include <iostream>
using namespace std;
int main() {
	setlocale(0, " ");

	cout << "[+] Переводчик\n\n[1] Русские слова\n[2] Английские слова\n\n[3] Выйти\n[+] Ввод: ";
	int x;
	cin >> x;
	switch (x) {
	case 1: {
		cout << "\n[1] Кот\n[2] Пицца\n[3] Апельсин\n[4] Телефон\n[5] Дерево\n[6] Дорога\n[7] Машина\n[8] Мяч\n[9] Сфера\n[10] Танк\n[11] Окно\n[12] Монитор\n[13] Стул\n[14] Велосипед\n[15] Пять\n[+] Выберите номер слова: ";
		cin >> x;
		switch (x) {
		case 1: {
			cout << "Перевод: Cat";
			break;
		}
		case 2: {
			cout << "Перевод: Pizza";
			break;
		}
		case 3: {
			cout << "Перевод: Orange";
			break;
		}
		case 4: {
			cout << "Перевод: Phone";
			break;
		}
		case 5: {
			cout << "Перевод: Three";
			break;
		}
		case 6: {
			cout << "Перевод: Road";
			break;
		}
		case 7: {
			cout << "Перевод: Car";
			break;
		}
		case 8: {
			cout << "Перевод: Ball";
			break;
		}
		case 9: {
			cout << "Перевод: Sphere";
			break;
		}
		case 10: {
			cout << "Перевод: Tank";
			break;
		}
		case 11: {
			cout << "Перевод: Window";
			break;
		}
		case 12: {
			cout << "Перевод: Screen";
			break;
		}
		case 13: {
			cout << "Перевод: Chare";
			break;
		}
		case 14: {
			cout << "Перевод: Bicycle";
			break;
		}
		case 15: {
			cout << "Перевод: Five";
			break;
		}
		default: {
			cout << "Такого слова нет";
			return 0;
		}
		}
		break;
	}
	case 2: {
		cout << "\n[1] one\n[2] two\n[3] three\n[4] four\n[5] five\n[6] six\n[7] seven\n[8] eight\n[9] nine\n[10] ten\n[11] eleven\n[12] twelve\n[13] thirteen\n[14] fourteen\n[15] fifteen\n[+] Выберите номер слова: ";
		cin >> x;
		switch (x) {
		case 1: {
			cout << "Перевод: Один";
			break;
		}
		case 2: {
			cout << "Перевод: Два";
			break;
		}
		case 3: {
			cout << "Перевод: Три";
			break;
		}
		case 4: {
			cout << "Перевод: Четыре";
			break;
		}
		case 5: {
			cout << "Перевод: Пять";
			break;
		}
		case 6: {
			cout << "Перевод: Шесть";
			break;
		}
		case 7: {
			cout << "Перевод: Семь";
			break;
		}
		case 8: {
			cout << "Перевод: Восемь";
			break;
		}
		case 9: {
			cout << "Перевод: Девять";
			break;
		}
		case 10: {
			cout << "Перевод: Десять";
			break;
		}
		case 11: {
			cout << "Перевод: Одиннадцать";
			break;
		}
		case 12: {
			cout << "Перевод: Двенадцать";
			break;
		}
		case 13: {
			cout << "Перевод: Тринадцать";
			break;
		}
		case 14: {
			cout << "Перевод: Четырнадцать";
			break;
		}
		case 15: {
			cout << "Перевод: Пятнадцать";
			break;
		}
		default: {
			cout << "Такого слова нет";
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