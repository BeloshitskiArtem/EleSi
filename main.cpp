#include <iostream>
#include "Property.h"

using namespace std;

/// <summary>
/// Функция, которая реализует красивый ввод ЛЮБОЙ
/// целочисленной переменной в этой програме, и спасает нас от миллиона дублей
/// </summary>
/// <param name="iputInformation">Текстовое поле, перед ввод, 
/// спрашиваем, что пользователь должен ввести</param>
/// <param name="value">ВВодимая переменная</param>
/// <returns>Уже инициализированная переменная</returns>
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
	cout << "Произведём ввод параметров Дома..." << endl;

	int tempInteger;
	char* tempChat;

	Input("Введите Площадь: ", tempInteger);
	house->SetArea(tempInteger);

	Input("Введите цену: ", tempInteger);
	house->SetPrice(tempInteger);

	Input("Введите текущее состояние: ", tempChat);
	house->SetCondition(tempChat);

	Input("Введите кол-во владельцев: ", tempInteger);
	house->SetNnumberOfOwners(tempInteger);

	Input("Введите материал постройки: ", tempChat);
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