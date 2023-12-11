#pragma once
#include <vector>
#include "Item.h"
#include "Iteminfo.h"

class Shop
{
private:
	vector<unique_ptr<Item>> _shopitem;
	//상점의 아이템들을 보관할 벡터

public:
	Shop() {
		//make_unique food 객체 동적 생성
		_shopitem.push_back(make_unique<Food::Dog_Food>());
		_shopitem.push_back(make_unique<Food :: Biscuit>());
		_shopitem.push_back(make_unique<Drink :: milk>());	
		_shopitem.push_back(make_unique<Drink :: water>());	


	}

	void displayItems() const; //아이템정보표시 함수
	Item* getitem(int index) const; // 아이템을 가져오게하는  get 함수

};

