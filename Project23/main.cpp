#include <iostream>
#include <string>
#include <Windows.h>
#include <iomanip>

void StartSells();
void AddProduct();
void ChangePrice();
void ShowTheWarehouse();
void ShowMenu();
void ChangeAmounth();
void ChangeTitle();
void RemoveProduct();
void ChangeAssortment();

int size = 10;
std::string* Title = new std::string[size]{ "чизбергер", "гамбургер", "черный лари", "сырная скала", "джейсон стетхам", "доминик торрето", "острый пукан", "бурш калифа", "травка по скидке", "сосугавкус" };
int* Price = new int[size] {100, 90, 759, 940, 1000, 1500, 568, 2500, 300, 825 };
int* Amounth = new int[size] {50, 70, 20, 10, 20, 90, 40, 20, 15, 25 };

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ShowMenu();



	delete[] Title;
	delete[] Price;
	delete[] Amounth;
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
	std::cout << "4. изменение ассортимента\n";
	std::cout << "5. изменение названия продуктов\n";
	std::cout << "6. Показать склад\n";
	std::cout << "7. выход\n";
	std::cout << "\n\nВвод: ";

	std::cin >> choose;
	if (choose == "1")
	{
		StartSells();
	}
	else if (choose == "2")
	{
		ChangePrice();

	}
	else if (choose == "3")
	{
		ChangeAmounth();
	}
	else if (choose == "4")
	{
		ChangeAssortment();
	}
	else if (choose == "5")
	{
		ChangeTitle();
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
void StartSells() 
{
	int choose;
	int count;

	std::string* tmpTitle = new std::string[size];
	int* tmpPrice = new int[size];
	int* tmpAmounth = new int[size];

	ShowTheWarehouse();
	std::cout << "\n0. закончить покупки \n";
	std::cout << "ввод: ";
	std::cin >> choose;
	std::cout << "введите количество: ";
	std::cin >> count;




}
void ChangePrice() 
{
	ShowTheWarehouse();
	int choose;
	int newPrice;
	std::cout << "ввод: ";
	std::cin >> choose;
	
	system("cls");
	std::cout << "Введите новую цену: ";
	std::cin >> newPrice;
	Price[choose - 1] = newPrice;

	ShowMenu();

}
void ChangeAmounth() 
{
	ShowTheWarehouse();
	int choose;
	int newAmounth;
	std::cout << "ввод: ";
	std::cin >> choose;

	system("cls");
	std::cout << "введите количество: ";
	std::cin >> newAmounth;
	Amounth[choose - 1] = newAmounth;

	ShowMenu();
}
void ChangeTitle() 
{
	ShowTheWarehouse();
	int choose;
	std::string newTitle;
	std::cout << "ввод: ";
	std::cin >> choose;

	system("cls");
	std::cout << "введите новое название: ";
	std::cin >> newTitle;
	Title[choose - 1] = newTitle;
	ShowMenu();

}
void ChangeAssortment() 
{
	system("cls");
	int choose{};
	std::cout << "1. Удалить продукт\n";
	std::cout << "2. Добавить продукт\n";
	std::cout << "Ввод: ";
	std::cin >> choose;
	if (choose == 1)
	{
		RemoveProduct();
	}
	else if (choose == 2)
	{
		AddProduct();
	}


	ShowMenu();
}
void RemoveProduct() 
{
	int choose{};

	ShowTheWarehouse();
	std::cout << "\nВведите номер продукта: ";
	std::cin >> choose;


	for (int i = 1; i <= size; i++)
	{
		if (i == choose)
		{
			Title[i - 1] = "";
			Price[i - 1] = NULL;
			Amounth[i - 1] = NULL;
		}
	}
	
	

}
void AddProduct() 
{
	int newPrice;
	int newAmounth;
	std::string newTitle;

	std::string* tmpTitle = new std::string[size + 1];
	int* tmpPrice = new int[size + 1];
	int* tmpAmounth = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		tmpTitle[i] = Title[i];
		tmpPrice[i] = Price[i];
		tmpAmounth[i] = Amounth[i];
	}
	size += 1;

	std::cout << "введите название: ";
	std::cin >> newTitle;
	std::cout << "введите цену: ";
	std::cin >> newPrice;
	std::cout << "введите кличество: ";
	std::cin >> newAmounth;

	tmpTitle[size - 1] = newTitle;
	tmpPrice[size - 1] = newPrice;
	tmpAmounth[size - 1] = newAmounth;

	std::swap(tmpTitle, Title);
	std::swap(tmpPrice, Price);
	std::swap(tmpAmounth, Amounth);


	delete[] tmpTitle;
	delete[] tmpPrice;
	delete[] tmpAmounth;

}


void ShowTheWarehouse() 
{
	system("cls");
	for (int i = 0; i < size; i++)
	{
		std::cout << i + 1 << '\t' << std::left << std::setw(30) << Title[i] << "\t" << Price[i] << "\t" << Amounth[i] << "\n";
	}
}
