#pragma once
#include "Item.h"

namespace Food {
	class Biscuit : public Item {
	public:
		Biscuit() : Item("Biscuit", 15) { }
		void use() const override {
			cout << "��Ŷ �������� �̿��մϴ�." << " ������ + 15, ������ +15" << endl;

		};
};


	class Dog_Food : public Item {
	public:
		Dog_Food() : Item("Dog_Food", 20) {}
		void use() const override {
			cout << "����������� �̿��մϴ�." << "������ +30" << endl;

		};




	};
};

	namespace Drink {
		class milk : public Item {
		public:
			milk() : Item("milk", 30) {}
			void use() const override {
				cout << "������ ����մϴ�." << "�����ؼ� + 20, ȣ���� +20" << endl;

			}


		};

		class water : public Item {
		public:
			water() : Item("water", 10) {}
			void use() const override
			{
				cout << "�������� ���� ����մϴ�." << "�����ؼ� +30" << endl;

			};
		};

	}