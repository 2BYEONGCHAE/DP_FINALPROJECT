#pragma once
#include <iostream>
using namespace std;

class Dog
{
private:
	//변수
	string _name;
	int _happiness;
	int _thirst;
	int _hunger;

public :
	//생성자함수
	Dog() : _name("unnamed"), _happiness(50), _hunger(50), _thirst(50) {}

	Dog(const string &name) : _name(name), _happiness(50), _hunger(50) {}
public :
	void bark() const {
		cout << _name << " : " << "멍멍!" << endl;
	};
	void displayneeds()const {
		cout << _name << "의 상태입니다." << 
			"행복도 : " << _happiness << " 배고픔 수치 : " << _hunger << "목마름 수치 : " << _thirst;
	};
	void decreaseNeeds() {
		_happiness -= 5;
		_thirst -= 5;
		_hunger -= 5;
	}; //시간별 감소를 위한 함수

	void increaseneed(int amount) {
		_happiness += amount;
	}

	void decreasdthirst(int amount) {
		_thirst -= amount;
	}


//get 함수 (수치를 get 함)
	int getHappy_dog() const { return _happiness; }
	int getThirst_dog() const { return _thirst; }
	int getHunger_dog() const { return _hunger; };
	string getname() { return _name; }


};

