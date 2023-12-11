#pragma once
#include <vector>
#include "Item.h"
#include "Iteminfo.h"

class Shop
{
private:
	vector<unique_ptr<Item>> _shopitem;
	//������ �����۵��� ������ ����

public:
	Shop() {
		//make_unique food ��ü ���� ����
		_shopitem.push_back(make_unique<Food::Dog_Food>());
		_shopitem.push_back(make_unique<Food :: Biscuit>());
		_shopitem.push_back(make_unique<Drink :: milk>());	
		_shopitem.push_back(make_unique<Drink :: water>());	


	}

	void displayItems() const; //����������ǥ�� �Լ�
	Item* getitem(int index) const; // �������� ���������ϴ�  get �Լ�

};

