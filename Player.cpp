#include "Player.h"
void Player :: interactWithDog() {
	displayAdoptDogs();
	int dogindex;
	cout << "함께 상호작용 할 강아지를 선택해주세요. (1-" << _dogs.size() << "): ";
	cin >> dogindex;

	if (dogindex > 0 && dogindex <= _dogs.size()) {
		_dogs[dogindex - 1]->displayneeds();
		//강아지와 상호작용하는 버튼을 구현가능하다.
	}
	else cout << "타당하지 않는 번호입니다.";
}; 
void Player::adoptdog() {
	string dogName;
	cout << "새로운 당신의 강아지 이름을 지어주세요 ! : ";
	cin >> dogName;

	_dogs.push_back(make_unique<Dog>(dogName));
	cout << "새로운 강아지가 추가되었습니다!" << "강아지 이름은 : " << dogName << endl;
}
void Player::displayAdoptDogs() const {
	cout << "-------입양된 강아지 목록-------";
	for (int i = 0; i < _dogs.size(); ++i) {
		cout << i + 1 << "." << _dogs[i]->getname() << endl;

	};
};
void Player :: useinventoryItem() { 
	int dogindex;
	displayAdoptDogs();
	cout << "아이템을 사용할 강아지의 번호를 선택해주세요." "(1 - " << _dogs.size() << ") : ";
	cin >> dogindex;

	if (dogindex > 0 && dogindex <= _dogs.size()) {
		displayInventory();
			int itemIndex;
			cout << "사용하고 싶은 아이템의 번호를 입력해주세요";
			cin >> itemIndex;

			if (itemIndex >= 0 && itemIndex < _inventory.size()) {
				_inventory[itemIndex]->use();
				_inventory.erase(_inventory.begin() + itemIndex);
			}
			else {
				cout << "타당하지 않는 아이템 번호입니다.";
			}

	}
	else {
		cout << "타당하지 않는 강아지의 번호입니다.";
	}
};

void Player :: displayInventory() const {
	cout << "--------------인벤토리------------" << endl;
	for (int i = 0; i < _inventory.size(); ++i) {
		cout << i << ". ";
		_inventory[i]->displayInfo(); // 정보를 보여준다.

	}
};