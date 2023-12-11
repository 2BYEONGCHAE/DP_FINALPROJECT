#pragma once
#include "Item.h"
class Toy : public Item
{
public :
	int _fun;
	Toy(const string name, int price, int fun) : Item(name, price), _fun(fun) {}
public :
	void use() const override {
		cout << _name << "을 선택하셨습니다." 
			<< "선택한 장난감으로 놀아줍니다. 행복도 +" << _fun << endl;

	}


};

