#ifndef _HEAP_H
#define _HEAP_H

#include<iostream>

constexpr std::size_t max_len = 50000;

class Heap {
private:
	std::size_t siz;
	int* arr;
	void increase_key(int i, int x);
	void heapify(int* a, int i, int n);
public:
	void print() {
		for (int i = 0; i < siz; i++) {
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	};
	Heap();
	~Heap();
	void push(int x);
	int pop();
	int& top() {
		return arr[0];
	};
	int size() {
		return siz;
	};
	bool empty() {
		return siz == 0;
	};
	bool check() {
		for (int i = 0; i < siz; i++) {
			if (i * 2 + 1 < siz && arr[i * 2 + 1] > arr[i]) return false;
			if (i * 2 + 2 < siz && arr[i * 2 + 2] > arr[i]) return false;
		}
		return true;
	};
	void build(int* a, int n);
	void sortIter(int* a, int n);
};

#endif