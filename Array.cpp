#include "Array.h"

Array::Array() {
	size = 10;
	arr = new int[size];
	for (int i = 0; i < size; ++i) {
		arr[i] = i;
	}
}
Array::Array(const int* arr_,int size_)
{
	size= size_;
	arr = new int[size];
	for (int i = 0; i < size; ++i) {
		arr[i] = arr_[i];
	}

}

Array::~Array()
{
	delete [] arr;
	arr = 0;
}

void Array::rotate(int  k_) {
	if (k_ >= size) {
		std::cout << "k is more" << std::endl;
	}
	else {
		for (int i = 0; i <size - 1; ++i) {
			arr[i] = arr[i] + arr[i%k_ + size - k_];
			arr[i%k_ + size - k_] = arr[i] - arr[i%k_ + size - k_];
			arr[i] = arr[i] - arr[i%k_ + size - k_];
		}

	}
}

	void Array::print() {
		for (int i = 0; i < size; i++)
			std::cout << arr[i] << " ";
	}


