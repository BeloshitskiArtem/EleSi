#include <iostream>
#include "Property.h"

using namespace std;

/// <summary>
/// �������, ������� ��������� �������� ���� �����
/// ������������� ���������� � ���� ��������, � ������� ��� �� �������� ������
/// </summary>
/// <param name="iputInformation">��������� ����, ����� ����, 
/// ����������, ��� ������������ ������ ������</param>
/// <param name="value">�������� ����������</param>
/// <returns>��� ������������������ ����������</returns>
template <typename T>
void Input(string iputInformation, T& value)
{
	cout << iputInformation;
	cin >> value;
	cout << endl;
	//return value;
}

void CreateObjectHouse(House* house)
{
	cout << "��������� ���� ���������� ����..." << endl;

	int tempInteger;
	char* tempChat;

	Input("������� �������: ", tempInteger);
	house->SetArea(tempInteger);

	Input("������� ����: ", tempInteger);
	house->SetPrice(tempInteger);

	Input("������� ������� ���������: ", tempChat);
	house->SetCondition(tempChat);

	Input("������� ���-�� ����������: ", tempInteger);
	house->SetNnumberOfOwners(tempInteger);

	Input("������� �������� ���������: ", tempChat);
	house->SetMaterial(tempChat);
}

int main()
{
	setlocale(LC_ALL, "ru");

	House* house = new House;
	CreateObjectHouse(house);
	delete house;

	return 0;
}