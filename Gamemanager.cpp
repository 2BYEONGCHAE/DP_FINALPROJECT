#include "Gamemanager.h"

void Gamemanager :: playgame() {
	while (true) {
		cout << "-----Game Menu-----" << endl;
		cout << "1. �������� ��ȣ�ۿ� �ϱ�" << endl;
		cout << "2. ���� �÷��̾� ���� Ȯ���ϱ�" << endl;
		cout << "3. ���� �����ϱ�" << endl;
		cout << "4. ������ �Ծ��ϱ�" << endl;
		cout << "5. ���� �����ϱ�";

		int choice;
		cout << "��ȣ�Է� : ";
		cin >> choice;

		switch (choice)
		{
		case 1 : 
			_player.interactWithDog();
			break;
		case 2:
			_player.printPlayerInfo();
			break;
		case 3:
			enterShop();
			break;
		case 4:
			_player.adoptdog();
			return;
		case5:
			cout << "������ �����մϴ�! �����Ϸ�Ǽ���~!";
			return;
		default:
			cout << "Ÿ������ ���� ��ȣ�Դϴ�. �ٽýõ����ּ���.";
		}

		updategame();

	}
}; // ���� �÷��� �������̽��� ���� �Լ�
void Gamemanager::enterShop() {
	cout << "������ ���� ���� ȯ���մϴ�!" << _player.getPlayername() << "��!";
	while (true)
	{
		cout << "----- ���� �޴� -----" << endl;
		cout << "1. ������ �������� Ȯ���մϴ�." << endl;
			cout << "2. �������� �����մϴ�." << endl;
			cout << "3. �κ��丮�� �ִ� �������� ����մϴ�." << endl;
			cout << "4. ������ �����ϴ�.";
			int choice;
			cout << "��ȣ ���� : ";
				cin >> choice;
				switch (choice)
				{
				case 1:
					_shop.displayItems();
					break;
				case 2:
					buyItem();
					break;
				case 3:
					_player.useinventoryItem();
				case 4:
					cout << "�������� �����մϴ�. ���߿� �ǿ�����!" << endl;
					return;
				default:
					cout << "Ÿ������ ���� ��ȣ�Դϴ�. �ٽ� �õ� ���ּ���. " << endl;
				}
	}
}; // ���� �������̽��� ���� �Լ�
	void Gamemanager::updategame() {
		for (auto& dog : _dogs) {
			dog->decreaseNeeds();
	}
		cout << "�ð��� ������ ���������� ����İ� ȣ����, �񸶸������� �پ��ϴ�.";
	
	};

	void Gamemanager::buyItem() {
		_shop.displayItems();
		int itemindex;
		cout << "��� ���� �������� �ε��� ��ȣ�� �Է��ϼ���.";
			cout << " ��ȣ �Է� : ";
			cin >> itemindex;

			Item* selectedItem = _shop.getitem(itemindex);
			if (selectedItem) {
				if (_player.getCoins() >= selectedItem->getPrice()) {
					_player._coins -= selectedItem->getPrice();
					_player._inventory.push_back(move(make_unique<Item>(selectedItem))); //�������� �����Ѵ�.
					cout << "����� " << selectedItem->getName() << "�� �����ϼ̽��ϴ�~" << endl;

				}
				else {
					cout << "�������� ��⿡ ���� �����մϴ�.\n";

				}


			}
			else cout << "Ÿ������ �ʴ� �ε��� ��ȣ�Դϴ�. \n";

	};
