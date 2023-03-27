
#include <iostream>
#include "..\dinamicLibCMake\Leaver.h"

int main()
{
	setlocale(LC_ALL, "Russian");   // задаём русский текст
	system("chcp 1251");            // настраиваем кодировку консоли
	std::system("cls");


	Leaver lv;
	std::string userName;
	std::cout << "Введите имя: "; std::cin >> userName;
	std::cout << lv.leave(userName) << std::endl;

	system("pause"); // Команда задержки экрана

	return 0;
}