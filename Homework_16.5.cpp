#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

int main()
{
	setlocale(LC_ALL, "Rus");
	const int N = 4;
	int array[N][N];
	time_t t;
	time(&t);
	int z = (localtime(&t)->tm_mday) % N;
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			array[i][j] = i + j;

			std::cout.width(3);
			std::cout << array[i][j];
		}
		std::cout << "\n";
	}
	std::cout << "\n";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == z) sum += array[i][j];
		}
	}   std::cout << "Cуммa элементов в строке массива, индекс которой равен остатку деления текущего числа календаря на N:" << " = " << sum << "\n";

	return 0;
}