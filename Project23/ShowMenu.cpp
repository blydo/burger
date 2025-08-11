#pragma once


#include "ShowMenu.hpp"


void ShowMenu()
{
	while (true)
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

		try
		{
			std::cin >> choose;
			if (std::stoi(choose) <= 7 && std::stoi(choose) < 1)
			{
				std::cout << "неправильный ввод";
			}
		}
		catch (const std::exception)
		{

			std::cerr << "Ты ввел строку в цифры";
			Sleep(2000);
		}


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
}










