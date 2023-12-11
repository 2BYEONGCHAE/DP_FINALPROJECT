#pragma once
#include "Item.h"

namespace Food {
	class Biscuit : public Item {
	public:
		Biscuit() : Item("Biscuit", 15) { }
		void use() const override {
			cout << "비스킷 아이템을 이용합니다." << " 만족도 + 15, 포만도 +15" << endl;

		};
};


	class Dog_Food : public Item {
	public:
		Dog_Food() : Item("Dog_Food", 20) {}
		void use() const override {
			cout << "강아지사료을 이용합니다." << "포만도 +30" << endl;

		};




	};
};

	namespace Drink {
		class milk : public Item {
		public:
			milk() : Item("milk", 30) {}
			void use() const override {
				cout << "우유를 사용합니다." << "갈증해소 + 20, 호감도 +20" << endl;

			}


		};

		class water : public Item {
		public:
			water() : Item("water", 10) {}
			void use() const override
			{
				cout << "강아지용 물을 사용합니다." << "갈증해소 +30" << endl;

			};
		};

	}