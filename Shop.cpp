#include "Shop.h"

void Shop::displayItems() const {
	cout << "-----상점 아이템 목록-----";
	for (int i = 0; i < _shopitem.size(); ++i) {
		cout << i << ".";
		_shopitem[i]->displayInfo();

	}
}

Item* Shop :: getitem(int index) const {
	if (index >= 0 && index < _shopitem.size()) {
		return _shopitem[index].get();

	}
	else {
		return nullptr;
	}


}