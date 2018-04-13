#include <iostream>
#include "Array.h"


int main() {
	int n,k;
	std::cout << "Size of array";
	std::cout << std::endl;
	std::cin >> n;
	std::cout << std::endl;
	std::cout << "Input array of " << n << " elements";
	std::cout << std::endl;
	int* array = new int[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> array[i];
	}
	std::cout << std::endl;
	std::cout << " Count of steps";
	std::cout << std::endl;
	std::cin >> k;
	std::cout << std::endl;
	Array arr(array, n);
	arr.rotate(k);
	std::cout << "Rotated the array of " << n << " elements to the right by " << k << " steps.";
	std::cout << std::endl;
	arr.print();
	system("pause");
	return 0;
}
