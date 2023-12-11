#include "Player.h"
void Player :: interactWithDog() {
	displayAdoptDogs();
	int dogindex;
	cout << "�Բ� ��ȣ�ۿ� �� �������� �������ּ���. (1-" << _dogs.size() << "): ";
	cin >> dogindex;

	if (dogindex > 0 && dogindex <= _dogs.size()) {
		_dogs[dogindex - 1]->displayneeds();
		//�������� ��ȣ�ۿ��ϴ� ��ư�� ���������ϴ�.
	}
	else cout << "Ÿ������ �ʴ� ��ȣ�Դϴ�.";
}; 
void Player::adoptdog() {
	string dogName;
	cout << "���ο� ����� ������ �̸��� �����ּ��� ! : ";
	cin >> dogName;

	_dogs.push_back(make_unique<Dog>(dogName));
	cout << "���ο� �������� �߰��Ǿ����ϴ�!" << "������ �̸��� : " << dogName << endl;
}
void Player::displayAdoptDogs() const {
	cout << "-------�Ծ�� ������ ���-------";
	for (int i = 0; i < _dogs.size(); ++i) {
		cout << i + 1 << "." << _dogs[i]->getname() << endl;

	};
};
void Player :: useinventoryItem() { 
	int dogindex;
	displayAdoptDogs();
	cout << "�������� ����� �������� ��ȣ�� �������ּ���." "(1 - " << _dogs.size() << ") : ";
	cin >> dogindex;

	if (dogindex > 0 && dogindex <= _dogs.size()) {
		displayInventory();
			int itemIndex;
			cout << "����ϰ� ���� �������� ��ȣ�� �Է����ּ���";
			cin >> itemIndex;

			if (itemIndex >= 0 && itemIndex < _inventory.size()) {
				_inventory[itemIndex]->use();
				_inventory.erase(_inventory.begin() + itemIndex);
			}
			else {
				cout << "Ÿ������ �ʴ� ������ ��ȣ�Դϴ�.";
			}

	}
	else {
		cout << "Ÿ������ �ʴ� �������� ��ȣ�Դϴ�.";
	}
};

void Player :: displayInventory() const {
	cout << "--------------�κ��丮------------" << endl;
	for (int i = 0; i < _inventory.size(); ++i) {
		cout << i << ". ";
		_inventory[i]->displayInfo(); // ������ �����ش�.

	}
};