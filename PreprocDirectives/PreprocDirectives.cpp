#include <iostream>
#define MODE 1

#ifndef MODE
#error Error
#endif


#if MODE == 1
#define add(type, a, b) ((a) + (b))
#endif



int main() {
	setlocale(LC_ALL, "Ru");
	int a, b;
	#if MODE == 1
	std::cout << "Работаю в боевом режиме." << std::endl;
	std::cout << "Введите число 1: ";
	std::cin >> a;

	std::cout << "Введите число 2: ";
	std::cin >> b;

	std::cout << "Результат сложения: " << add(int, a, b) << std::endl;


	#elif MODE == 0
	std::cout << "Работаю в режиме тренировки";

	#else MODE
	std::cout << "Неизвестный режим. Завершение работы";
	#endif
}
