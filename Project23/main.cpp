#include <iostream>

int size = 10;
std::string* title = new std::string[size]{ "чизбергер, гамбургер, черный лари, сырная скала, джейсон стетхам, доминик торрето, острый пукан, бурш калифа, травка по скидке, сосугавкус " };
int* prices = new int[size] {100, 90, 759, 940, 1000, 1500, 568, 2500, 300, 825 };
int* Amounth = new int[size] {50, 70, 20, 10, 20, 90, 40, 20, 15, 25 };

int main() 
{
	setlocale(LC_ALL, "ru");
	std::string choose;
	std::cout << "бургерная харамчика\n\n";
	std::cout << "1. начать покупки\n";
	std::cout << "2. изменить цены\n";
	std::cout << "3. изменить количество продуктов\n";
	std::cout << "4. изменение смортимента\n";
	std::cout << "5. изменение названия продуктов\n";
	std::cout << "6. выход\n";


	


	return 0;
}