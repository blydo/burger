#include <iostream>

int size = 10;
std::string* title = new std::string[size]{ "���������, ���������, ������ ����, ������ �����, ������� �������, ������� �������, ������ �����, ���� ������, ������ �� ������, ���������� " };
int* prices = new int[size] {100, 90, 759, 940, 1000, 1500, 568, 2500, 300, 825 };
int* Amounth = new int[size] {50, 70, 20, 10, 20, 90, 40, 20, 15, 25 };

int main() 
{
	setlocale(LC_ALL, "ru");
	std::string choose;
	std::cout << "��������� ���������\n\n";
	std::cout << "1. ������ �������\n";
	std::cout << "2. �������� ����\n";
	std::cout << "3. �������� ���������� ���������\n";
	std::cout << "4. ��������� �����������\n";
	std::cout << "5. ��������� �������� ���������\n";
	std::cout << "6. �����\n";


	


	return 0;
}