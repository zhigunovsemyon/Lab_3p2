//Задание 3.*2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b; //Добавление переменных
	printf("a = "); scanf("%d", &a); //Ввод значения a

	//Расчёты
	b = a * a;		//a^2, 1 операция
	b = b * b * b;	//a^6, 3 операции
	b = b * b;		//a^12, 4 операции
	b = b * a;		//a^13, 5 операций

	//Вывод полученного значения
	printf("а в степени 13 равно %d\n", b);
	
	return 0;
}
