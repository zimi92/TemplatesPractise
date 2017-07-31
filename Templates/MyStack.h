#pragma once
#include "Example.h"

template <typename T>
class MyStack : public Example
{
	T _tab[100];
	size_t _top;
public:
	void push(T var) {
		_tab[++_top] = var;
	};

	T pop() { 
		if (!empty()) {			
			return _tab[_top--];
		}
		return NULL;
	}

	bool empty() {
		return _top == -1;
	}

	void displayResault() {
		int k = _top;
		while (k > 0) {
			std::cout << _tab[k--] << std::endl;
		}
	}

	MyStack() :_top(-1) {};

	~MyStack() {};
};

