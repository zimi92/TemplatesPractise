#include "templatesExp.h"
#include "Example.h"
#include <iostream>

int main() {
	templatesExp temp;
	//minimum of two variables
	temp.minimum(1, 2);
	//minimum of array
	const int ArrayLenght = 10;
	float tab[ArrayLenght] = { 1.4, 1, 22.3 , 3.2, 4.6, 0.88, -0.5, 12, -12.3, -3.4 };
	temp.minimumTab(tab, tab + ArrayLenght);
	getchar();
	return 0;
}