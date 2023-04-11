#include <iostream>
#include <cstdlib>
#include <ctime>


template <typename T>
void print_arr(T arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

void func(int* pnum, int num) {

	for (int i = 1; i < num; i++)
		*pnum *= num;
}



int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	//Задача 1

	const int size = 10;
	int arr[size]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::cout << "Изначальный массив: \n";
	print_arr(arr, size);
	
	for (int i = 0; i < size - 1; i += 2)
		std::swap(*(arr + i), *(arr + i + 1));
	std::cout << "Итоговый массив: \n";
	print_arr(arr, size);
	std::cout << std::endl;


	//Задача 2
	n = 5;
	std::cout << "Введите число -> ";
	std::cin >> m;
	func(&n, m);
	std::cout << n;


	return 0;
}



