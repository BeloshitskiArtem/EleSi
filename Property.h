#pragma once

/**
	 * @brief ��������� ������������
	*/
class Property
{

protected:

	/**
	 * @brief �������
	*/
	int _area;

	/**
	 * @brief ����
	*/
	int _price;

	/**
	 * @brief ���������
	*/
	char* _condition;

	/**
	 * @brief ���-�� ����������
	*/
	int _numberOfOwners;

public:
	virtual ~Property() = 0;

	
	void SetArea(int area)
	{
		this->_area = area;
	}

	void SetPrice(int Price)
	{
		this->_price = Price;
	}

	void SetCondition(char* Condition)
	{
		this->_condition = Condition;
	}

	void SetNnumberOfOwners(int NumberOfOwners)
	{
		this->_numberOfOwners = NumberOfOwners;
	}


	int GetArea()
	{
		return this->_area;
	}

	int GetPrice()
	{
		return this->_price;
	}

	char* GetCondition()
	{
		return this->_condition;
	}

	int GetNnumberOfOwners()
	{
		return this->_numberOfOwners;
	}
};






/**
	 * @brief ����� ��������
*/
class Buildings : public Property
{

protected:
	/**
	 * @brief ��������
	*/
	char* _material;

public:
	virtual ~Buildings() = 0;

	void SetMaterial(char* Material)
	{
		this->_material = Material;
	}

	char* GetMaterial()
	{
		return this->_material;
	}
};







/**
	 * @brief ����� ����
*/
class House : public Buildings
{
private:

	/**
	 * @brief ���-�� ������� �� ����� �����
	*/
	int _howAnyApartmentsOnFloor;

public:
	House() {}
	~House() {}

	int SetHowAnyApartmentsOnFloor(int HowAnyApartmentsOnFloor)
	{
		this->_howAnyApartmentsOnFloor = HowAnyApartmentsOnFloor;
	}

	int GetHowAnyApartmentsOnFloor()
	{
		return this->_howAnyApartmentsOnFloor;
	}

	//void CreateObjectHouse();
};