#include <iostream>
#include <string>

void ChangePrice();
void ShowTheWarehouse();
void ShowMenu();

int size = 10;
std::string* title = new std::string[size]{ "���������", "���������", "������ ����", "������ �����", "������� �������", "������� �������", "������ �����", "���� ������", "������ �� ������", "����������" };
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
	std::cout << "��������� ���������\n\n";
	std::cout << "1. ������ �������\n";
	std::cout << "2. �������� ����\n";
	std::cout << "3. �������� ���������� ���������\n";
	std::cout << "4. ��������� �����������\n";
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
	std::cout << "����";
	std::cin >> choose;
	
	system("cls");
	std::cout << "������� ����� ����: ";
	std::cin >> newPrice;
	prices[choose - 1] = newPrice;

	ShowMenu();

}

void ShowTheWarehouse() 
{
	system("cls");
	std::cout << "\n\n1. ��������: " << title[0] << " ���-��: " << Amounth[0] << " ����: " << prices[0] << "\n";
	std::cout << "2. ��������: " << title[1] << " ���-��: " << Amounth[1] << " ����: " << prices[1] << "\n";
	std::cout << "3. ��������: " << title[2] << " ���-��: " << Amounth[2] << " ����: " << prices[2] << "\n";
	std::cout << "4. ��������: " << title[3] << " ���-��: " << Amounth[3] << " ����: " << prices[3] << "\n";
	std::cout << "5. ��������: " << title[4] << " ���-��: " << Amounth[4] << " ����: " << prices[4] << "\n";
	std::cout << "6. ��������: " << title[5] << " ���-��: " << Amounth[5] << " ����: " << prices[5] << "\n";
	std::cout << "7. ��������: " << title[6] << " ���-��: " << Amounth[6] << " ����: " << prices[6] << "\n";
	std::cout << "8. ��������: " << title[7] << " ���-��: " << Amounth[7] << " ����: " << prices[7] << "\n";
	std::cout << "9. ��������: " << title[8] << " ���-��: " << Amounth[8] << " ����: " << prices[8] << "\n";
	std::cout << "10. ��������: " << title[9] << " ���-��: " << Amounth[9] << " ����: " << prices[9] << "\n";
}
