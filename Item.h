#pragma once
#include "Dog.h"
class Item {
	//추상클래스로 직접적인 인스턴스화 X
protected : 
	int _price;
	string _name;
public :

	Item(const string &name, int price) : _name(name) , _price(price) {}


public :
	void displayInfo() const {
		cout << _name << "Price : " << _price << "원";
	}
	virtual void use() const {
		cout << "아이템을 이용합니다." << "[아이템 이름  : " << _name << " ]" << endl;
 	};

public : // get 함수
	const string getName() { return _name; }
	int getPrice() const { return _price; }
};


