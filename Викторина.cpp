#include<iostream>
#include<Windows.h>
#include<ctime>
#include<conio.h>
#include<cstdlib>

#define CLEAR system("cls")
#define GREEN 2
#define RED 4
#define STOP system("pause")






class Quiz
{
public:
	void menu() {
		while (true)
		{
			CLEAR;
			std::cout << "[+] Игра \"Викторина\"\n\n";
			std::cout << "[1] Новая игра\n";
			std::cout << "[2] Настройки\n";
			std::cout << "[3] Правила\n";
			std::cout << "[4] ливай\n\n";
			std::cout << "[>] Введите пункт: ";
			char choose;
			std::cin >> choose;
			switch (choose)
			{
			case'1':
				game();
				break;
			case'2':
				settings();
				break;
			case'3':
				rules();
				break;
			case'4':
				exit(NULL);
				break;
			default:
				break;
			}

		}

	}

	int settings() {

		game_Is_Setting = false;
		while (true)
		{
			CLEAR;
			std::cout << "[+] Настройки\n\n";
			std::cout << "[1] Кол-во хейта: " << number_questions << "\n";
			std::cout << "[2] Кол-во Аегисов: " << life << "\n";
			std::cout << "[3] Кол-во читов: " << promt << "\n";
			std::cout << "[4] F9 тычка пауза лив \n\n";
			std::cout << "[>] Введите пункт: ";
			char choose;
			std::cin >> choose;
			switch (choose) {
			case '1': {
				char choose;
				std::cout << "[>] как много хейта-вопросов ([1]5, [2]10, [3]15): ";
				std::cin >> choose;
				if (choose == '1')
					number_questions = 5;
				else if (choose == '2')
					number_questions = 10;
				else if (choose == '3')
					number_questions = 15;
				else
					number_questions = 5;
				break;
			}
			case'2':
				std::cout << "[>] Введите кол-во аегисов: ";
				std::cin >> life;
				if (life > 10)
				{
					life = 3;
					break;
				}
				game_Is_Setting = true;
				break;
			case'3':
				std::cout << "[>] какие читы юзнем кол-во: ";
				std::cin >> promt;
				if (promt > 10)
				{
					promt = 3;
					break;
				}
				game_Is_Setting = true;
				break;
			case'4':
				return 1;
			default:
				break;
			}
		}
		game_Is_Setting = true;
	}

	void showAnswer(int N) {
		if (N == 0)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 1)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 2)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 3)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 4)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t[4]" << answer[N][3] << "\n\n";

	}
	void showFifty(int M, int i) {
		CLEAR;
		promt--;
		gotoxy(0, 8);
		std::cout << "["; setHearthAndSmileSkin(3); std::cout << "]" << "Аегисы: " << life;
		std::cout << "\t["; setHearthAndSmileSkin(2); std::cout << "]" << "у/с/п: " << point;
		std::cout << "\t[" << char(63) << "]" << "Читы(50/50): " << promt;
		gotoxy(0, 0);
		if (M == 0)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << "\t\t[2]" << answer[M][1] << "\n\n[3]" << "\t\t[4]" << answer[M][3] << "\n\n";
		}
		if (M == 1)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << "\t\t[2]" << answer[M][1] << "\n\n[3]" << answer[M][2] << "\t\t[4]" << "\n\n";
		}
		if (M == 2)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << answer[M][0] << "\t\t[2]" << answer[M][1] << "\n\n[3]" << "\t\t\t[4]" << "\n\n";
		}
		if (M == 3)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << answer[M][0] << "\t\t[2]" << "\n\n[3]" << "\t\t\t[4]" << answer[M][3] << "\n\n";
		}
		if (M == 4)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << "\t\t[2]" << answer[M][1] << "\n\n[3]" << answer[M][2] << "\t[4]" << "\n\n";
		}
	}

	void showAnswerForTen(int N) {
		if (N == 5)
			std::cout << "[1]" << answer[N][0] << "\t\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 6)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 7)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 8)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 9)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 10)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 11)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 12)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 13)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 14)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
	}
	void showFiftyForTen(int M, int i) {
		CLEAR;
		promt--;
		gotoxy(0, 8);
		std::cout << "["; setHearthAndSmileSkin(3); std::cout << "]" << "Аегисы: " << life;
		std::cout << "\t["; setHearthAndSmileSkin(2); std::cout << "]" << "у/с/п: " << point;
		std::cout << "\t[" << char(63) << "]" << "Читы(50/50): " << promt;
		gotoxy(0, 0);
		if (M == 5)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << "\t\t\t[2]" << answer[M][1] << "\n\n[3]" << answer[M][2] << "\t\t[4]" << "\n\n";
		}
		if (M == 6)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << answer[M][0] << "\t\t[2]" << "\n\n[3]" << answer[M][2] << "\t\t[4]" << "\n\n";
		}
		if (M == 7)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << answer[M][0] << "\t\t[2]" << "\n\n[3]" << "\t\t\t[4]" << answer[M][3] << "\n\n";
		}
		if (M == 8)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << answer[M][0] << "\t\t[2]" << answer[M][1] << "\n\n[3]" << "\t\t\t\t[4]" << "\n\n";
		}
		if (M == 9)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << answer[M][0] << "\t\t[2]" << "\n\n[3]" << answer[M][2] << "\t\t[4]" << "\n\n";
		}
		if (M == 10)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << answer[M][0] << "\t\t[2]" << "\n\n[3]" << answer[M][2] << "\t\t[4]" << "\n\n";
		}
		if (M == 11)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << "\t\t[2]" << answer[M][1] << "\n\n[3]" << "\t\t[4]" << answer[M][3] << "\n\n";
		}
		if (M == 12)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << "\t\t\t[2]" << answer[M][1] << "\n\n[3]" << "\t\t\t[4]" << answer[M][3] << "\n\n";
		}
		if (M == 13)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << "\t\t\t[2]" << "\n\n[3]" << answer[M][2] << "\t\t\t[4]" << answer[M][3] << "\n\n";
		}
		if (M == 14)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << answer[M][0] << "\t\t[2]" << "\n\n[3]" << "\t\t\t[4]" << answer[M][3] << "\n\n";
		}
	}

	void showAnswerForFifteen(int N) {
		if (N == 15)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 16)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 17)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 18)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 19)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t[4]" << answer[N][3] << "\n\n";
		if (N == 20)
			std::cout << "[1]" << answer[N][0] << "\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 21)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t[4]" << answer[N][3] << "\n\n";
		if (N == 22)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 23)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t[4]" << answer[N][3] << "\n\n";
		if (N == 24)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 25)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t[4]" << answer[N][3] << "\n\n";
		if (N == 26)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 27)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t[4]" << answer[N][3] << "\n\n";
		if (N == 28)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
		if (N == 29)
			std::cout << "[1]" << answer[N][0] << "\t\t[2]" << answer[N][1] << "\n\n[3]" << answer[N][2] << "\t\t[4]" << answer[N][3] << "\n\n";
	}
	void showFiftyForFifteen(int M, int i) {
		CLEAR;
		promt--;
		gotoxy(0, 8);
		std::cout << "["; setHearthAndSmileSkin(3); std::cout << "]" << "Аегисы: " << life;
		std::cout << "\t["; setHearthAndSmileSkin(2); std::cout << "]" << "у/с/п: " << point;
		std::cout << "\t[" << char(63) << "]" << "Читы(50/50): " << promt;
		gotoxy(0, 0);
		if (M == 15)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << answer[M][0] << "\t\t[2]" << "\n\n[3]" << answer[M][2] << "\t\t[4]" << "\n\n";
		}
		if (M == 16)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << "\t\t\t[2]" << answer[M][1] << "\n\n[3]" << answer[M][2] << "\t\t[4]" << "\n\n";
		}
		if (M == 17)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << answer[M][0] << "\t\t[2]" << answer[M][1] << "\n\n[3]" << "\t\t\t[4]" << "\n\n";
		}
		if (M == 18)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << answer[M][0] << "\t\t[2]" << "\n\n[3]" << "\t\t\t[4]" << answer[M][3] << "\n\n";
		}
		if (M == 19)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << "\t\t\t[2]" << answer[M][1] << "\n\n[3]" << answer[M][2] << "\t[4]" << "\n\n";
		}
		if (M == 20)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << answer[M][0] << "\t[2]" << "\n\n[3]" << "\t\t[4]" << answer[M][3] << "\n\n";
		}
		if (M == 21)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << answer[M][0] << "\t\t[2]" << "\n\n[3]" << answer[M][2] << "\t[4]" << "\n\n";
		}
		if (M == 22)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << answer[M][0] << "\t\t[2]" << "\n\n[3]" << "\t\t\t[4]" << answer[M][3] << "\n\n";
		}
		if (M == 23)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << "\t\t\t[2]" << answer[M][1] << "\n\n[3]" << answer[M][2] << "\t[4]" << "\n\n";
		}
		if (M == 24)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << answer[M][0] << "\t\t[2]" << answer[M][1] << "\n\n[3]" << "\t\t\t[4]" << "\n\n";
		}
		if (M == 25)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << "\t\t\t[2]" << answer[M][1] << "\n\n[3]" << "\t\t\t[4]" << answer[M][3] << "\n\n";
		}
		if (M == 26)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << answer[M][0] << "\t\t[2]" << answer[M][1] << "\n\n[3]" << "\t\t\t[4]" << "\n\n";
		}
		if (M == 27)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << "\t\t[2]" << answer[M][1] << "\n\n[3]" << "\t\t[4]" << answer[M][3] << "\n\n";
		}
		if (M == 28)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << "\t\t\t[2]" << answer[M][1] << "\n\n[3]" << answer[M][2] << "\t\t[4]" << "\n\n";
		}
		if (M == 29)
		{
			std::cout << "[" << i << "]" << questions[M] << "\n";
			std::cout << "[1]" << "\t\t\t[2]" << "\n\n[3]" << answer[M][2] << "\t\t[4]" << answer[M][3] << "\n\n";
		}

	}

	void game() {
		restartGame(life, promt);
		if (number_questions == 5)
		{
			bool endGame = false;
			int i = 1;
			while (endGame != true)
			{
				if (check[0] == 1 && check[1] == 1 && check[2] == 1 && check[3] == 1 && check[4] == 1)
				{
					showResult();
					endGame = true;
					game_Is_Setting = false;
					break;
				}
				else if (life < 1)
				{
					showResult();
					endGame = true;
					game_Is_Setting = false;
					break;
				}
				CLEAR;
				std::cout << "[" << i << "]";
				gotoxy(0, 8);
				std::cout << "["; setHearthAndSmileSkin(3); std::cout << "]" << "Аегисы: " << life;
				std::cout << "\t["; setHearthAndSmileSkin(2); std::cout << "]" << "у/с/п: " << point;
				std::cout << "\t[" << char(63) << "]" << "Читы(50/50): " << promt;
				gotoxy(3, 0);
				char response;
				question = 1 + rand() % 5;
				switch (question)
				{
				case 1:
					if (check[0] == 1) {
						i--;
						break;
					}
					std::cout << questions[0] << "\n";
					showAnswer(0);
					showSelectAnswer();
					std::cin >> response;
					if (response == '2') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFifty(0, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '2') {
							showRightAnswer();
							check[0] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check[0] = 1;
					break;
				case 2:
					if (check[1] == 1) {
						i--;
						break;
					}
					std::cout << questions[1] << "\n";
					showAnswer(1);
					showSelectAnswer();
					std::cin >> response;
					if (response == '3') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							check[1] = 1;
							break;
						}
						showFifty(1, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '3') {
							showRightAnswer();
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check[1] = 1;
					break;
				case 3:
					if (check[2] == 1) {
						i--;
						break;
					}
					std::cout << questions[2] << "\n";
					showAnswer(2);
					showSelectAnswer();
					std::cin >> response;
					if (response == '1') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							check[2] = 1;
							break;
						}
						showFifty(2, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '1') {
							showRightAnswer();
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check[2] = 1;
					break;
				case 4:
					if (check[3] == 1) {
						i--;
						break;
					}
					std::cout << questions[3] << "\n";
					showAnswer(3);
					showSelectAnswer();
					std::cin >> response;
					if (response == '1') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							check[3] = 1;
							break;
						}
						showFifty(3, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '1') {
							showRightAnswer();
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check[3] = 1;
					break;
				case 5:
					if (check[4] == 1) {
						i--;
						break;
					}
					std::cout << questions[4] << "\n";
					showAnswer(4);
					showSelectAnswer();
					std::cin >> response;
					if (response == '2') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							check[4] = 1;
							break;
						}
						showFifty(4, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '2') {
							showRightAnswer();
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check[4] = 1;
					break;
				default:
					break;
				}
				i++;
			}

		}
		if (number_questions == 10)
		{
			bool endGame = false;
			int i = 1;
			while (endGame != true)
			{
				if (check_ten[0] == 1 && check_ten[1] == 1 && check_ten[2] == 1 && check_ten[3] == 1 && check_ten[4] == 1 &&
					check_ten[5] == 1 && check_ten[6] == 1 && check_ten[7] == 1 && check_ten[8] == 1 && check_ten[9] == 1)
				{
					showResult();
					endGame = true;
					game_Is_Setting = false;
					break;
				}
				else if (life < 1)
				{
					showResult();
					game_Is_Setting = false;
					endGame = true;
					break;
				}
				CLEAR;
				std::cout << "[" << i << "]";
				gotoxy(0, 8);
				std::cout << "["; setHearthAndSmileSkin(3); std::cout << "]" << "Аегисы: " << life;
				std::cout << "\t["; setHearthAndSmileSkin(2); std::cout << "]" << "у/с/п: " << point;
				std::cout << "\t[" << char(63) << "]" << "Читы(50/50): " << promt;
				gotoxy(3, 0);
				if (i == 10)
				{
					gotoxy(4, 0);
				}
				char response;
				question = 1 + rand() % 10;
				switch (question)
				{
				case 1:
					if (check_ten[0] == 1) {
						i--;
						break;
					}
					std::cout << questions[5] << "\n";
					showAnswerForTen(5);
					showSelectAnswer();
					std::cin >> response;
					if (response == '2') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForTen(5, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '2') {
							showRightAnswer();
							check_ten[0] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_ten[0] = 1;
					break;
				case 2:
					if (check_ten[1] == 1) {
						i--;
						break;
					}
					std::cout << questions[6] << "\n";
					showAnswerForTen(6);
					showSelectAnswer();
					std::cin >> response;
					if (response == '1') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForTen(6, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '1') {
							showRightAnswer();
							check_ten[1] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_ten[1] = 1;
					break;
				case 3:
					if (check_ten[2] == 1) {
						i--;
						break;
					}
					std::cout << questions[7] << "\n";
					showAnswerForTen(7);
					showSelectAnswer();
					std::cin >> response;
					if (response == '1') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForTen(7, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '1') {
							showRightAnswer();
							check_ten[2] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_ten[2] = 1;
					break;
				case 4:
					if (check_ten[3] == 1) {
						i--;
						break;
					}
					std::cout << questions[8] << "\n";
					showAnswerForTen(8);
					showSelectAnswer();
					std::cin >> response;
					if (response == '1') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForTen(8, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '1') {
							showRightAnswer();
							check_ten[3] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_ten[3] = 1;
					break;
				case 5:
					if (check_ten[4] == 1) {
						i--;
						break;
					}
					std::cout << questions[9] << "\n";
					showAnswerForTen(9);
					showSelectAnswer();
					std::cin >> response;
					if (response == '1') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForTen(9, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '1') {
							showRightAnswer();
							check_ten[4] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_ten[4] = 1;
					break;
				case 6:
					if (check_ten[5] == 1) {
						i--;
						break;
					}
					std::cout << questions[10] << "\n";
					showAnswerForTen(10);
					showSelectAnswer();
					std::cin >> response;
					if (response == '3') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForTen(10, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '3') {
							showRightAnswer();
							check_ten[5] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_ten[5] = 1;
					break;
				case 7:
					if (check_ten[6] == 1) {
						i--;
						break;
					}
					std::cout << questions[11] << "\n";
					showAnswerForTen(11);
					showSelectAnswer();
					std::cin >> response;
					if (response == '2') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForTen(11, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '2') {
							showRightAnswer();
							check_ten[6] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_ten[6] = 1;
					break;
				case 8:
					if (check_ten[7] == 1) {
						i--;
						break;
					}
					std::cout << questions[12] << "\n";
					showAnswerForTen(12);
					showSelectAnswer();
					std::cin >> response;
					if (response == '2') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForTen(12, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '2') {
							showRightAnswer();
							check_ten[7] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_ten[7] = 1;
					break;
				case 9:
					if (check_ten[8] == 1) {
						i--;
						break;
					}
					std::cout << questions[13] << "\n";
					showAnswerForTen(13);
					showSelectAnswer();
					std::cin >> response;
					if (response == '4') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForTen(13, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '4') {
							showRightAnswer();
							check_ten[8] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_ten[8] = 1;
					break;
				case 10:
					if (check_ten[9] == 1) {
						i--;
						break;
					}
					std::cout << questions[14] << "\n";
					showAnswerForTen(14);
					showSelectAnswer();
					std::cin >> response;
					if (response == '4') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForTen(14, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '4') {
							showRightAnswer();
							check_ten[9] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_ten[9] = 1;
					break;
				default:
					break;
				}
				i++;
			}

		}
		if (number_questions == 15)
		{
			bool endGame = false;
			int i = 1;
			while (endGame != true)
			{
				if (check_fifteen[0] == 1 && check_fifteen[1] == 1 && check_fifteen[2] == 1 && check_fifteen[3] == 1 &&
					check_fifteen[4] == 1 && check_fifteen[5] == 1 && check_fifteen[6] == 1 && check_fifteen[7] == 1 &&
					check_fifteen[8] == 1 && check_fifteen[9] == 1 && check_fifteen[10] == 1 && check_fifteen[11] == 1 &&
					check_fifteen[12] == 1 && check_fifteen[13] == 1 && check_fifteen[14] == 1)
				{
					showResult();
					endGame = true;
					game_Is_Setting = false;
					break;
				}
				else if (life < 1)
				{
					showResult();
					game_Is_Setting = false;
					endGame = true;
					break;
				}
				CLEAR;
				std::cout << "[" << i << "]";
				gotoxy(0, 8);
				std::cout << "["; setHearthAndSmileSkin(3); std::cout << "]" << "Аегисы: " << life;
				std::cout << "\t["; setHearthAndSmileSkin(2); std::cout << "]" << "У/с/п: " << point;
				std::cout << "\t[" << char(63) << "]" << "Читы(50/50): " << promt;
				gotoxy(3, 0);
				if (i >= 10)
				{
					gotoxy(4, 0);
				}
				char response;
				question = 1 + rand() % 15;
				switch (question)
				{
				case 1:
					if (check_fifteen[0] == 1) {
						i--;
						break;
					}
					std::cout << questions[15] << "\n";
					showAnswerForFifteen(15);
					showSelectAnswer();
					std::cin >> response;
					if (response == '1') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForFifteen(15, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '1') {
							showRightAnswer();
							check_fifteen[0] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_fifteen[0] = 1;
					break;
				case 2:
					if (check_fifteen[1] == 1) {
						i--;
						break;
					}
					std::cout << questions[16] << "\n";
					showAnswerForFifteen(16);
					showSelectAnswer();
					std::cin >> response;
					if (response == '2') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForFifteen(16, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '2') {
							showRightAnswer();
							check_fifteen[1] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_fifteen[1] = 1;
					break;
				case 3:
					if (check_fifteen[2] == 1) {
						i--;
						break;
					}
					std::cout << questions[17] << "\n";
					showAnswerForFifteen(17);
					showSelectAnswer();
					std::cin >> response;
					if (response == '2') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForFifteen(17, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '2') {
							showRightAnswer();
							check_fifteen[2] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_fifteen[2] = 1;
					break;
				case 4:
					if (check_fifteen[3] == 1) {
						i--;
						break;
					}
					std::cout << questions[18] << "\n";
					showAnswerForFifteen(18);
					showSelectAnswer();
					std::cin >> response;
					if (response == '1') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForFifteen(18, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '1') {
							showRightAnswer();
							check_fifteen[3] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_fifteen[3] = 1;
					break;
				case 5:
					if (check_fifteen[4] == 1) {
						i--;
						break;
					}
					std::cout << questions[19] << "\n";
					showAnswerForFifteen(19);
					showSelectAnswer();
					std::cin >> response;
					if (response == '3') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForFifteen(19, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '3') {
							showRightAnswer();
							check_fifteen[4] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_fifteen[4] = 1;
					break;
				case 6:
					if (check_fifteen[5] == 1) {
						i--;
						break;
					}
					std::cout << questions[20] << "\n";
					showAnswerForFifteen(20);
					showSelectAnswer();
					std::cin >> response;
					if (response == '1') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForFifteen(20, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '1') {
							showRightAnswer();
							check_fifteen[5] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_fifteen[5] = 1;
					break;
				case 7:
					if (check_fifteen[6] == 1) {
						i--;
						break;
					}
					std::cout << questions[21] << "\n";
					showAnswerForFifteen(21);
					showSelectAnswer();
					std::cin >> response;
					if (response == '3') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForFifteen(21, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '3') {
							showRightAnswer();
							check_fifteen[6] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_fifteen[6] = 1;
					break;
				case 8:
					if (check_fifteen[7] == 1) {
						i--;
						break;
					}
					std::cout << questions[22] << "\n";
					showAnswerForFifteen(22);
					showSelectAnswer();
					std::cin >> response;
					if (response == '1') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForFifteen(22, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '1') {
							showRightAnswer();
							check_fifteen[7] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_fifteen[7] = 1;
					break;
				case 9:
					if (check_fifteen[8] == 1) {
						i--;
						break;
					}
					std::cout << questions[23] << "\n";
					showAnswerForFifteen(23);
					showSelectAnswer();
					std::cin >> response;
					if (response == '3') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForFifteen(23, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '3') {
							showRightAnswer();
							check_fifteen[8] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_fifteen[8] = 1;
					break;
				case 10:
					if (check_fifteen[9] == 1) {
						i--;
						break;
					}
					std::cout << questions[24] << "\n";
					showAnswerForFifteen(24);
					showSelectAnswer();
					std::cin >> response;
					if (response == '1') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForFifteen(24, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '1') {
							showRightAnswer();
							check_fifteen[9] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_fifteen[9] = 1;
					break;
				case 11:
					if (check_fifteen[10] == 1) {
						i--;
						break;
					}
					std::cout << questions[25] << "\n";
					showAnswerForFifteen(25);
					showSelectAnswer();
					std::cin >> response;
					if (response == '2') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForFifteen(25, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '2') {
							showRightAnswer();
							check_fifteen[10] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_fifteen[10] = 1;
					break;
				case 12:
					if (check_fifteen[11] == 1) {
						i--;
						break;
					}
					std::cout << questions[26] << "\n";
					showAnswerForFifteen(26);
					showSelectAnswer();
					std::cin >> response;
					if (response == '1') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForFifteen(26, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '1') {
							showRightAnswer();
							check_fifteen[11] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_fifteen[11] = 1;
					break;
				case 13:
					if (check_fifteen[12] == 1) {
						i--;
						break;
					}
					std::cout << questions[27] << "\n";
					showAnswerForFifteen(27);
					showSelectAnswer();
					std::cin >> response;
					if (response == '2') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForFifteen(27, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '2') {
							showRightAnswer();
							check_fifteen[12] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_fifteen[12] = 1;
					break;
				case 14:
					if (check_fifteen[13] == 1) {
						i--;
						break;
					}
					std::cout << questions[28] << "\n";
					showAnswerForFifteen(28);
					showSelectAnswer();
					std::cin >> response;
					if (response == '2') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForFifteen(28, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '2') {
							showRightAnswer();
							check_fifteen[13] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_fifteen[13] = 1;
					break;
				case 15:
					if (check_fifteen[14] == 1) {
						i--;
						break;
					}
					std::cout << questions[29] << "\n";
					showAnswerForFifteen(29);
					showSelectAnswer();
					std::cin >> response;
					if (response == '4') {
						showRightAnswer();
					}
					else if (response == 'h')
					{
						if (promt == 0)
						{
							showLowFifty();
							break;
						}
						showFiftyForFifteen(29, i);
						showSelectAnswer();
						std::cin >> response;
						if (response == '4') {
							showRightAnswer();
							check_fifteen[14] = 1;
							break;
						}
						else
							showWrongAnswer();
					}
					else
						showWrongAnswer();
					check_fifteen[14] = 1;
					break;
				default:
					break;
				}
				i++;
			}
		}
	}


private:
	int question = 0;
	int check[5] = {
		0,0,0,0,0
	};
	int check_ten[10] = {
		0,0,0,0,0,0,0,0,0,0,
	};
	int check_fifteen[15] = {
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	};

	int number_questions = 5;
	int life = 3;
	int promt = 3;
	bool random_questions = false;
	short point = 0;
	bool game_Is_Setting = false;

	std::string questions[30] = {
		"кто самый zxc герой",
		"На каком метро работаем?",
		"ФИО преподавателя ?",
		"1+1?",
		"Что вкусно?",
		"Что перед числом 993?",
		"Потом?",
		"поставите автомат?",
		"Прингл или лейс?",
		"Зачем она берет?",
		"математика?",
		"Куда",
		"Что будет если плюнуть в натрий",
		"сколько iq у того кто придумывает вопросы ? ",
		"Лунтик прощает всех?",
		"Барбоскини здоровый мультик?",
		"почему курить предно?",
		"если взять ручку и кинуть в стену, что случится?",
		"Почему коалы любят эвкалипт?",
		"Ну может все-таки автомат????",
		"абидна?",
		"зачем писать от руки?",
		"Куда мы пойдем после экзамена?",
		"А потом?",
		"А потом?",
		"Почему каждый раз так?",
		"зачем девушки красятся?",
		"сладенького?",
		"как измерить кол-во мест в маршрутке?",
		"что хуже если зашпаклюют в квартире в стене?",

	};

	std::string answer[30][4] = {
		{"бара","сфэ","течка","обезьяна "},
		{"Люблино","Рассказовка","Рязанский проспект","Дубровка"},
		{"Орлов Алексей Дмитриевич","Иван Иванов Иванович","Пенчик Евтюшин Анатольевич","Пётр 1"},
		{"синий","красный","фиолетовый","4"},
		{"Ёлка","Рыба","Бордюр","Аквамарин"},
		{"1000-7","я гуль","zxc","завтра"},
		{"Должен","Должен","Должен","Должен"},
		{"нет","нет","нет","нет "},
		{"Принглс","Лейс","ЗОЖ","Все равно"},
		{"чужие","рыбы","в","рот"},
		{"синий?","синий?","синий?","0"},
		{"туда","потом","где?","зачем"},
		{"Взрыв","ничего","мокрый натрий","Натрий обидется"},
		{"табуретка","Гуль","Подпивас","Тумбочка"},
		{"да","да","да","да"},
		{"Нет","Нет","Нет","Нет"},
		{"ахбдщба","легкие бобо","рак","маму расстроешь(((("},
		{"ей будет больно","упадет","разобьется в дребезги","а зачем кидать ручку "},
		{"Бухают","Полезно","просто еда ","фотосинтез"},
		{"нет","нет","нет","нет "},
		{"да","да","да","да"},
		{"К куратору","К куратору","К куратору","К куратору"},
		{"Пиво","Пиво","Пиво","Пиво"},
		{"Домой","гулять","спать на лавочке в беседке у технопарка","в гости"},
		{"Потому что кто-то захотел","что за вопросы","завтра","Рыба"},
		{"Потому что кто-то захотел","что за вопросы","завтра","Рыба"},
		{"Обман","Для порчи кожи","Красиво","ну так все делают"},
		{"батончик","сырок глазированный","рыба","несквик с пивом"},
		{"Абдурозик","Хазбик","22","на передние не садись да тут для родни фрукты езжи"},
		{"Рыба","ЭЭЭЭЭЭкскремент","кусок мяса","яйцо"}
	};

	void showSelectAnswer() {
		std::cout << "[>] Выбирай!!!!: ";
	}
	void showRightAnswer() {
		setColor(GREEN);
		std::cout << "\n[:)] опа застилил";
		Sleep(1500);
		setColor(7);
		point++;
	}
	void showWrongAnswer() {
		setColor(RED);
		std::cout << "\n[:(] сиди в таверне";
		Sleep(1500);
		setColor(7);
		life--;
	}
	void showLowFifty() {
		setColor(RED);
		std::cout << "\n[!] неа не скажу";
		Sleep(1500);
		setColor(7);
		life--;
	}
	void setColor(int idColor) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), idColor);
	}
	void gotoxy(short x, short y) {
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x, y });
	}
	void showResult() {
		CLEAR;
		std::cout << "\n\t\tТвой лвл: " << point << " / " << number_questions << "\n\n";
		STOP;
	}
	void restartGame(int _life, int _promt) {
		for (int i = 0; i < 5; i++)
		{
			check[i] = 0;
		}
		for (int i = 0; i < 10; i++)
		{
			check_ten[i] = 0;
		}
		for (int i = 0; i < 15; i++)
		{
			check_fifteen[i] = 0;
		}
		if (game_Is_Setting == false)
		{
		
			life = 3;
			promt = 3;
			point = 0;
		}
		else
		{
			life = _life;
			promt = _promt;
			point = 0;
		}
	}

	void setHearthAndSmileSkin(int hearth_or_smile) {
		if (hearth_or_smile == 3)
		{
			setColor(RED);
			std::cout << char(hearth_or_smile);
			setColor(7);
		}
		if (hearth_or_smile == 2)
		{
			setColor(GREEN);
			std::cout << char(hearth_or_smile);
			setColor(7);
		}
	}
	void rules() {
		CLEAR;
		std::cout << "Правила очень просты!\n";
		std::cout << "Отвечайте на вопросы и зарабатывайте очки.\n";
		std::cout << "А вот подскажу на кнопку \'h\'.\n нет подсказок думой головой, а вот и нет не правильно!\n";
		std::cout << "Рыба!:)\n\n";
		STOP;
	}
};







int main(int argc, char* argv[]) {
	setlocale(0, "");
	srand(time(NULL));


	Quiz quiz;
	quiz.menu();


	return 0;
}