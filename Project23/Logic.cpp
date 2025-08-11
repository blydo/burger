
#include "Logic.hpp"

void StartSells()
{
	int choose;
	int count;

	std::string* tmpTitle = new std::string[size];
	int* tmpPrice = new int[size];
	int* tmpAmounth = new int[size];

	while (true) {

		ShowTheWarehouse();
		std::cout << "\n0. закончить покупки \n";
		std::cout << "Введите товар: ";
		std::cin >> choose;
		if (choose == 0)
		{
			break;
		}


		while (true)
		{
			std::cout << "введите количество: ";
			std::cin >> count;
			if (count > Amounth[choose - 1])
			{
				std::cout << "отсоси у тебя слишком большой\n";
				Sleep(2000);
				;				continue;
			}
			break;
		}
		if (count == 0)
		{
			continue;
		}
		tmpTitle[choose - 1] = Title[choose - 1];
		tmpPrice[choose - 1] = Price[choose - 1] * count;
		tmpAmounth[choose - 1] = 0 + count;
		Amounth[choose - 1] -= count;

	}
	system("cls");
	for (int i = 0; i < size; i++)
	{
		if (tmpTitle[i] != "" && tmpPrice[i] > 0 && tmpAmounth[i] > 0)
		{
			std::cout << i + 1 << '\t' << std::left << std::setw(30) << tmpTitle[i] << "\t" << tmpPrice[i] << "\t" << tmpAmounth[i] << "\n";
		}

	}
	int check = 0;
	for (int i = 0; i < size; i++)
	{
		if (tmpPrice[i] > 0)
		{
			check += tmpPrice[i];

		}
	}
	std::cout << "Общая цена: " << check;
	Sleep(5000);









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


