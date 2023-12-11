#pragma once
#include <vector>
#include "Item.h"
using namespace std;
class Player
{
public:
	vector<unique_ptr<Dog>> _dogs; //동적크기 조절 벡터, 강아지 객체 저장용 
	vector<unique_ptr<Item>> _inventory; //아이템을 위한 벡터
	string _playername;
	int _coins; //가지고있는 돈
public:
	Player(const string& playername) : _playername(playername), _coins(100) {}
public :
	//강아지 입양함수 : emplace_back 컨테이너에 새로운 요소 추가함,
	//makeunique : 템플릿 함수 Dog 클래스에 새로운 객체 생성, 생성자에 name 설정후 초기화.
	void adoptdog(); // 강아지 입양을 위한 함수
	void interactWithDog() ; //강아지와 상호작용하는 함수
	void displayAdoptDogs() const; // 현재 보유한 강아지를 확인하는 함수
	void displayInventory() const ; //인벤토리를 보여주는 함수
	void useinventoryItem() ; //강아지를 선택 후에 아이템을 이용하게 하는 함수
	void printPlayerInfo() {

		cout << "Player의 이름은 : " << _playername << endl;
		cout << "보유한 강아지들의 정보 : " << endl;
		for (const auto& dog : _dogs) {
			cout << "강아지 행복도 : " << dog->getHappy_dog();
			cout << "갈증수치(낮을수록 갈증상태) : " << dog->getThirst_dog();
			cout << "배고픔수치(낮을수록 배고픔) : " << dog->getHunger_dog();


		}
		cout << "가지고 있는 돈 : " << _coins << endl;
		displayInventory();
	};

public :
	string getPlayername() const { return _playername; }
//돈에 관련된 함수들 
	int getCoins() const {
		return _coins;
	} // 코인의 get 함수

	void decreaseCoins(int amount) {
		_coins -= amount;
	} //coin을 차감하는함수
	


};

