#include <iostream>
#include <string>

void ChangePrice();
void ShowTheWarehouse();
void ShowMenu();

int size = 10;
std::string* title = new std::string[size]{ "чизбергер", "гамбургер", "черный лари", "сырная скала", "джейсон стетхам", "доминик торрето", "острый пукан", "бурш калифа", "травка по скидке", "сосугавкус" };
int* prices = new int[size] {100, 90, 759, 940, 1000, 1500, 568, 2500, 300, 825 };
int* Amounth = new int[size] {50, 70, 20, 10, 20, 90, 40, 20, 15, 25 };

int main() 
{
	setlocale(LC_ALL, "ru");
	ShowMenu();


	
	return 0;
}


void ShowMenu() 
{
	system("cls");
	std::string choose;
	std::cout << "бургерная харамчика\n\n";
	std::cout << "1. начать покупки\n";
	std::cout << "2. изменить цены\n";
	std::cout << "3. изменить количество продуктов\n";
	std::cout << "4. изменение смортимента\n";
	std::cout << "5. изменение названия продуктов\n";
	std::cout << "6. Показать склад\n";
	std::cout << "7. выход\n";
	std::cout << "\n\nВвод: ";

	std::cin >> choose;
	if (choose == "1")
	{

	}
	else if (choose == "2")
	{
		ChangePrice();

	}
	else if (choose == "3")
	{

	}
	else if (choose == "4")
	{

	}
	else if (choose == "5")
	{

	}
	else if (choose == "6")
	{
		std::string str;
		ShowTheWarehouse();
		std::cout << "\n\nВведите что угодно для выхода: ";
		std::cin >> str;
		ShowMenu();

	}
	else if (choose == "7")
	{
		exit(0);
	}
}
void ChangePrice() 
{
	ShowTheWarehouse();
	int choose;
	int newPrice;
	std::cout << "ввод";
	std::cin >> choose;
	
	system("cls");
	std::cout << "Введите новую цену: ";
	std::cin >> newPrice;
	prices[choose - 1] = newPrice;

	ShowMenu();

}

void ShowTheWarehouse() 
{
	system("cls");
	std::cout << "\n\n1. Название: " << title[0] << " кол-во: " << Amounth[0] << " цена: " << prices[0] << "\n";
	std::cout << "2. Название: " << title[1] << " кол-во: " << Amounth[1] << " цена: " << prices[1] << "\n";
	std::cout << "3. Название: " << title[2] << " кол-во: " << Amounth[2] << " цена: " << prices[2] << "\n";
	std::cout << "4. Название: " << title[3] << " кол-во: " << Amounth[3] << " цена: " << prices[3] << "\n";
	std::cout << "5. Название: " << title[4] << " кол-во: " << Amounth[4] << " цена: " << prices[4] << "\n";
	std::cout << "6. Название: " << title[5] << " кол-во: " << Amounth[5] << " цена: " << prices[5] << "\n";
	std::cout << "7. Название: " << title[6] << " кол-во: " << Amounth[6] << " цена: " << prices[6] << "\n";
	std::cout << "8. Название: " << title[7] << " кол-во: " << Amounth[7] << " цена: " << prices[7] << "\n";
	std::cout << "9. Название: " << title[8] << " кол-во: " << Amounth[8] << " цена: " << prices[8] << "\n";
	std::cout << "10. Название: " << title[9] << " кол-во: " << Amounth[9] << " цена: " << prices[9] << "\n";
}
