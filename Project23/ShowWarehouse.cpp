

#include <iostream>
#include <iomanip>

#include "ShowWarehouse.hpp"

void ShowTheWarehouse()
{
	system("cls");
	for (int i = 0; i < size; i++)
	{
		std::cout << i + 1 << '\t' << std::left << std::setw(30) << Title[i] << "\t" << Price[i] << "\t" << Amounth[i] << "\n";
	}
}



