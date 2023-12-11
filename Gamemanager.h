#pragma once
#include "Player.h"
#include "Shop.h"
class Gamemanager
{
private:
	vector < unique_ptr<Dog>> _dogs;
	Player& _player;
	Shop _shop;
public :
	Gamemanager(Player & player) : _player(player) {
		//���������� ������ ����
		_dogs.push_back(make_unique<Dog>("�ӽð�����"));
	}
	void playgame(); // ���� �÷��� �������̽��� ���� �Լ�
protected :
	void enterShop(); // ���� �������̽��� ���� �Լ�
	void updategame(); // �ð��� �������� �������� ����� ȣ������ �϶���Ŵ.
	void buyItem();

};

