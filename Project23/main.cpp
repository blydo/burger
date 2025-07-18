#include <Windows.h>

#include "ShowMenu.hpp"
#include "Models.cpp"


int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ShowMenu();



	delete[] Title;
	delete[] Price;
	delete[] Amounth;
	return 0;
}






