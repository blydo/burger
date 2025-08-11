#pragma once


#include "ShowMenu.hpp"


void ShowMenu()
{
	while (true)
	{
		system("cls");
		std::string choose;
		std::cout << "��������� ���������\n\n";
		std::cout << "1. ������ �������\n";
		std::cout << "2. �������� ����\n";
		std::cout << "3. �������� ���������� ���������\n";
		std::cout << "4. ��������� ������������\n";
		std::cout << "5. ��������� �������� ���������\n";
		std::cout << "6. �������� �����\n";
		std::cout << "7. �����\n";
		std::cout << "\n\n����: ";

		try
		{
			std::cin >> choose;
			if (std::stoi(choose) <= 7 && std::stoi(choose) < 1)
			{
				std::cout << "������������ ����";
			}
		}
		catch (const std::exception)
		{

			std::cerr << "�� ���� ������ � �����";
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
			std::cout << "\n\n������� ��� ������ ��� ������: ";
			std::cin >> str;
			ShowMenu();

		}
		else if (choose == "7")
		{
			exit(0);
		}
	}
}










