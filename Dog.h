#pragma once
#include <iostream>
using namespace std;

class Dog
{
private:
	//����
	string _name;
	int _happiness;
	int _thirst;
	int _hunger;

public :
	//�������Լ�
	Dog() : _name("unnamed"), _happiness(50), _hunger(50), _thirst(50) {}

	Dog(const string &name) : _name(name), _happiness(50), _hunger(50) {}
public :
	void bark() const {
		cout << _name << " : " << "�۸�!" << endl;
	};
	void displayneeds()const {
		cout << _name << "�� �����Դϴ�." << 
			"�ູ�� : " << _happiness << " ����� ��ġ : " << _hunger << "�񸶸� ��ġ : " << _thirst;
	};
	void decreaseNeeds() {
		_happiness -= 5;
		_thirst -= 5;
		_hunger -= 5;
	}; //�ð��� ���Ҹ� ���� �Լ�

	void increaseneed(int amount) {
		_happiness += amount;
	}

	void decreasdthirst(int amount) {
		_thirst -= amount;
	}


//get �Լ� (��ġ�� get ��)
	int getHappy_dog() const { return _happiness; }
	int getThirst_dog() const { return _thirst; }
	int getHunger_dog() const { return _hunger; };
	string getname() { return _name; }


};

