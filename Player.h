#pragma once
#include <vector>
#include "Item.h"
using namespace std;
class Player
{
public:
	vector<unique_ptr<Dog>> _dogs; //����ũ�� ���� ����, ������ ��ü ����� 
	vector<unique_ptr<Item>> _inventory; //�������� ���� ����
	string _playername;
	int _coins; //�������ִ� ��
public:
	Player(const string& playername) : _playername(playername), _coins(100) {}
public :
	//������ �Ծ��Լ� : emplace_back �����̳ʿ� ���ο� ��� �߰���,
	//makeunique : ���ø� �Լ� Dog Ŭ������ ���ο� ��ü ����, �����ڿ� name ������ �ʱ�ȭ.
	void adoptdog(); // ������ �Ծ��� ���� �Լ�
	void interactWithDog() ; //�������� ��ȣ�ۿ��ϴ� �Լ�
	void displayAdoptDogs() const; // ���� ������ �������� Ȯ���ϴ� �Լ�
	void displayInventory() const ; //�κ��丮�� �����ִ� �Լ�
	void useinventoryItem() ; //�������� ���� �Ŀ� �������� �̿��ϰ� �ϴ� �Լ�
	void printPlayerInfo() {

		cout << "Player�� �̸��� : " << _playername << endl;
		cout << "������ ���������� ���� : " << endl;
		for (const auto& dog : _dogs) {
			cout << "������ �ູ�� : " << dog->getHappy_dog();
			cout << "������ġ(�������� ��������) : " << dog->getThirst_dog();
			cout << "����ļ�ġ(�������� �����) : " << dog->getHunger_dog();


		}
		cout << "������ �ִ� �� : " << _coins << endl;
		displayInventory();
	};

public :
	string getPlayername() const { return _playername; }
//���� ���õ� �Լ��� 
	int getCoins() const {
		return _coins;
	} // ������ get �Լ�

	void decreaseCoins(int amount) {
		_coins -= amount;
	} //coin�� �����ϴ��Լ�
	


};

