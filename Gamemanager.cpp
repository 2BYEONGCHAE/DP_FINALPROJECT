#include "Gamemanager.h"

void Gamemanager :: playgame() {
	while (true) {
		cout << "-----Game Menu-----" << endl;
		cout << "1. 강아지와 상호작용 하기" << endl;
		cout << "2. 현재 플레이어 정보 확인하기" << endl;
		cout << "3. 상점 입장하기" << endl;
		cout << "4. 강아지 입양하기" << endl;
		cout << "5. 게임 종료하기";

		int choice;
		cout << "번호입력 : ";
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
			cout << "게임을 종료합니다! 좋은하루되세요~!";
			return;
		default:
			cout << "타당하지 않은 번호입니다. 다시시도해주세요.";
		}

		updategame();

	}
}; // 게임 플레이 인터페이스를 위한 함수
void Gamemanager::enterShop() {
	cout << "상점에 오신 것을 환영합니다!" << _player.getPlayername() << "님!";
	while (true)
	{
		cout << "----- 상점 메뉴 -----" << endl;
		cout << "1. 상점의 아이템을 확인합니다." << endl;
			cout << "2. 아이템을 구매합니다." << endl;
			cout << "3. 인벤토리에 있는 아이템을 사용합니다." << endl;
			cout << "4. 상점을 나갑니다.";
			int choice;
			cout << "번호 선택 : ";
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
					cout << "상점에서 퇴장합니다. 나중에 또오세요!" << endl;
					return;
				default:
					cout << "타당하지 않은 번호입니다. 다시 시도 해주세요. " << endl;
				}
	}
}; // 상점 인터페이스를 위한 함수
	void Gamemanager::updategame() {
		for (auto& dog : _dogs) {
			dog->decreaseNeeds();
	}
		cout << "시간이 지나면 강아지들의 배고픔과 호감도, 목마름정도가 줄어듭니다.";
	
	};

	void Gamemanager::buyItem() {
		_shop.displayItems();
		int itemindex;
		cout << "사고 싶은 아이템의 인덱스 번호를 입력하세요.";
			cout << " 번호 입력 : ";
			cin >> itemindex;

			Item* selectedItem = _shop.getitem(itemindex);
			if (selectedItem) {
				if (_player.getCoins() >= selectedItem->getPrice()) {
					_player._coins -= selectedItem->getPrice();
					_player._inventory.push_back(move(make_unique<Item>(selectedItem))); //아이템을 복사한다.
					cout << "당신은 " << selectedItem->getName() << "을 구매하셨습니다~" << endl;

				}
				else {
					cout << "아이템을 사기에 돈이 부족합니다.\n";

				}


			}
			else cout << "타당하지 않는 인덱스 번호입니다. \n";

	};
