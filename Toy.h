#pragma once
#include "Item.h"
class Toy : public Item
{
public :
	int _fun;
	Toy(const string name, int price, int fun) : Item(name, price), _fun(fun) {}
public :
	void use() const override {
		cout << _name << "�� �����ϼ̽��ϴ�." 
			<< "������ �峭������ ����ݴϴ�. �ູ�� +" << _fun << endl;

	}


};

