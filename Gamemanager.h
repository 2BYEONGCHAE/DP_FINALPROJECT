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
		//여러마리의 강아지 생성
		_dogs.push_back(make_unique<Dog>("임시강아지"));
	}
	void playgame(); // 게임 플레이 인터페이스를 위한 함수
protected :
	void enterShop(); // 상점 인터페이스를 위한 함수
	void updategame(); // 시간을 지나게해 강아지들 배고픔 호감도를 하락시킴.
	void buyItem();

};

