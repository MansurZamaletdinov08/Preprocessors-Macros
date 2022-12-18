#include <iostream>
#define MODE 1

#ifndef MODE
#error Error
#endif

#if defined MODE == 0
std::cout << "Работаю в режиме тренировки";
#endif

#if MODE == 1
//std::cout << "Работаю в боевом режиме.";
#define add(type, a, b) ((a) + (b))

#else MODE
std::cout << "Неизвестный режим. Завершение работы";
#endif


int main() {
	setlocale(LC_ALL, "Ru");
	int a, b;
	std::cout << "Введите число 1: ";
	std::cin >> a;

	std::cout << "Введите число 2: ";
	std::cin >> b;

	std::cout << add(int, a, b);
}
