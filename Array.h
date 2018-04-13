#pragma once
#include <iostream>

class Array{
public:
	Array();
	Array(const int* arr_, int size_);
	~Array();
	void rotate(int k_);
	void print();
private:
	int  size;
	int * arr;

};

