#pragma once
#include "Example.h"

class templatesExp : public Example
{
public:
	template <typename T> T minimum(T x, T y) {
		T result = x>y ? y : x;
		std::cout << result << std::endl;
		return result;
	}

	template <typename T> T minimumTab(T *tab1, T*tabLast) {
		T result = *tab1;
		while (tab1 != tabLast) {
			if (*tab1 < result) {
				result = *tab1;
			}
			tab1++;
		}
		std::cout << result << std::endl;
		return result;
	}
	void displayResault();
	templatesExp();
	~templatesExp();
};

