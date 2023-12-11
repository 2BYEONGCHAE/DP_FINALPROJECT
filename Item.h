#pragma once
#include "Dog.h"
class Item {
	//�߻�Ŭ������ �������� �ν��Ͻ�ȭ X
protected : 
	int _price;
	string _name;
public :

	Item(const string &name, int price) : _name(name) , _price(price) {}


public :
	void displayInfo() const {
		cout << _name << "Price : " << _price << "��";
	}
	virtual void use() const {
		cout << "�������� �̿��մϴ�." << "[������ �̸�  : " << _name << " ]" << endl;
 	};

public : // get �Լ�
	const string getName() { return _name; }
	int getPrice() const { return _price; }
};


