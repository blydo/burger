#include <iostream>
#include <string>
#include <Windows.h>
#include <iomanip>

void AddProduct();
void ChangePrice();
void ShowTheWarehouse();
void ShowMenu();
void ChangeAmounth();
void ChangeTitle();
void RemoveProduct();
void ChangeAssortment();

int size = 10;
std::string* Title = new std::string[size]{ "���������", "���������", "������ ����", "������ �����", "������� �������", "������� �������", "������ �����", "���� ������", "������ �� ������", "����������" };
int* Price = new int[size] {100, 90, 759, 940, 1000, 1500, 568, 2500, 300, 825 };
int* Amounth = new int[size] {50, 70, 20, 10, 20, 90, 40, 20, 15, 25 };

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ShowMenu();



	
	return 0;
}


void ShowMenu() 
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
void ChangePrice() 
{
	ShowTheWarehouse();
	int choose;
	int newPrice;
	std::cout << "����: ";
	std::cin >> choose;
	
	system("cls");
	std::cout << "������� ����� ����: ";
	std::cin >> newPrice;
	Price[choose - 1] = newPrice;

	ShowMenu();

}
void ChangeAmounth() 
{
	ShowTheWarehouse();
	int choose;
	int newAmounth;
	std::cout << "����: ";
	std::cin >> choose;

	system("cls");
	std::cout << "������� ����������: ";
	std::cin >> newAmounth;
	Amounth[choose - 1] = newAmounth;

	ShowMenu();
}
void ChangeTitle() 
{
	ShowTheWarehouse();
	int choose;
	std::string newTitle;
	std::cout << "����: ";
	std::cin >> choose;

	system("cls");
	std::cout << "������� ����� ��������: ";
	std::cin >> newTitle;
	Title[choose - 1] = newTitle;
	ShowMenu();

}
void ChangeAssortment() 
{
	system("cls");
	int choose{};
	std::cout << "1. ������� �������\n";
	std::cout << "2. �������� �������\n";
	std::cout << "����: ";
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
	std::cout << "\n������� ����� ��������: ";
	std::cin >> choose;

	std::string* tmpTitle = new std::string[size];
	int* tmpPrice = new int[size];
	int* tmpAmounth= new int[size];

	for (int i = 1; i < size; i++)
	{
		if (i == choose)
		{
			tmpTitle[i] = " ";
			tmpPrice[i] = 0;
			tmpAmounth[i] = 0;
		}
			tmpTitle[i] = Title[i];
			tmpPrice[i] = Price[i];
			tmpAmounth[i] = Amounth[i];
		
		
	}
	std::swap(tmpTitle, Title);
	std::swap(tmpPrice, Price);
	std::swap(tmpAmounth, Amounth);
	

}
void AddProduct() 
{

}


void ShowTheWarehouse() 
{
	system("cls");
	for (int i = 0; i < size; i++)
	{
		std::cout << i + 1 << '\t' << std::left << std::setw(30) << Title[i] << "\t" << Amounth[i] << "\t" << Price[i] << "\n";
	}
}
