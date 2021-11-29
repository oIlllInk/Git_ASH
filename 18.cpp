#include <iostream>
#include <windows.h>
using namespace std;
#define cls system("cls");

int check(char* arrp) {
    char arr[7][7];
    for (int i = 0; i < 7; i++) {
        for (int y = 0; y < 7; y++) {
            arr[i][y] = ',';
        }
    }

    int a = 0;
    for (int i = 2; i < 5; i++) {
        for (int y = 2; y < 5; y++) {
            arr[i][y] = arrp[a];
            a++;
        }
    }
    for (int i = 2; i < 5; i++) {
        for (int y = 2; y < 5; y++) {
            if (arr[i][y] == 'x') {
                if (arr[i][y + 1] == 'x' && arr[i][y + 2] == 'x' ||
                    arr[i + 1][y] == 'x' && arr[i + 2][y] == 'x' ||
                    arr[i + 1][y + 1] == 'x' && arr[i + 2][y + 2] == 'x' ||
                    arr[i + 1][y - 1] == 'x' && arr[i + 2][y - 2] == 'x') {
                    return 1;
                }
            }
            else if (arr[i][y] == 'o') {
                if (arr[i + 2][y + 2] == 'o' && arr[i + 1][y + 1] == 'o' ||
                    arr[i][y + 1] == 'o' && arr[i][y + 2] == 'o' ||
                    arr[i + 2][y] == 'o' && arr[i + 1][y] == 'o' ||
                    arr[i + 2][y - 2] == 'o' && arr[i + 1][y - 1] == 'o') {
                    return 2;
                }
            }
        }
    }
    for (size_t i = 2; i < 5; i++) {
        for (size_t y = 2; y < 5; y++) {
            if (arr[i][y] == '.') {
                return 0;
            }
        }
    }
    return 3;
}

void game(int size) {
    cls;
    int prov = 0;
    int way = 2;
    int cord = 0;
    int cord1 = 0;



    char arr[3][3] = { {'.', '.', '.'},
                            {'.', '.', '.'},
                            {'.', '.', '.'} };
    while (true) {

        cls;
        cout << "\t1 \t2 \t3 \n\n\n";
        for (int i = 0; i < 3; i++) {
            cout << i + 1;
            for (int y = 0; y < 3; y++) {
                cout << "\t" << arr[i][y];
            }
            cout << "\n\n\n";
        }
        prov = check(arr[0]);
        if (prov == 1) {
            cout << "Победа крестиков!";
            int _; cin >> _;
            return;
        }
        else if (prov == 2) {
            cout << "Победа ноликов!";
            int _; cin >> _;
            return;
        }
        else if (prov == 3) {
            cout << "Ничья!";
            int _; cin >> _;
            return;
        }

        if (way % 2 == 0) {
            cout << "Ход крестика!\nВведите координаты ячейки!\n";
            while (true) {
                cout << "Координата 1: ";
                cin >> cord;
                cout << "Координата 2: ";
                cin >> cord1;
                if (arr[cord - 1][cord1 - 1] == '.') {
                    arr[cord - 1][cord1 - 1] = 'x';
                    break;
                }
                else {
                    cout << "\nЭта ячейка уже заполнена, введите другое значение\n\n";
                }
            }
        }
        else if (way % 2 != 0) {
            if (size == 2) {
                while (true) {
                    cord = rand() % 3;
                    cord1 = rand() % 3;
                    if (arr[cord][cord1] == '.') {
                        arr[cord][cord1] = 'o';
                        break;
                    }
                }
            }
            else if (size == 1) {
                while (true) {
                    cout << "Ход нолика!\nВведите координаты ячейки!\n";
                    cout << "Координата 1: ";
                    cin >> cord;
                    cout << "Координата 2: ";
                    cin >> cord1;
                    if (arr[cord - 1][cord1 - 1] == '.') {
                        arr[cord - 1][cord1 - 1] = 'o';
                        break;
                    }
                    else {
                        cout << "\nЭта ячейка уже заполнена, введите другое значение\n\n";
                    }
                }
            }
        }
        way++;
    }
}



int setting() {
    cls;
    int size = 0;
    cout << "Выберите противника \n\n[1] Человек.\n[2] Робот." << endl;
    cin >> size;
    return size;
}

int main()
{
    srand(time(NULL));
    setlocale(0, "");
    int menu;
    int size = 1;
    while (true) {
        cls;
        cout << "[1]Игра \n\n[2]Настройки \n\n[3]Правила \n\n[4]Выход\n\n";
        cin >> menu;
        if (menu == 1) {
            game(size);
        }
        else if (menu == 2) {
            size = setting();
        }
        else if (menu == 3) {
            cls;
            cout << "Правил не будет.";
            int e; cin >> e;
        }
        else if (menu == 4) {
            return 0;
        }
        else {
            cout << "Нет такого выбора!";
            Sleep(3000);
        }
    }
    return 0;
}
