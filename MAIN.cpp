#include "Gamemanager.h"


int main() {
	string playername;
	cout << "����� �̸��� �����ΰ���? : ";
	cin >> playername;


	Player player(playername);
	Gamemanager gamemanager(player);
	gamemanager.playgame();

	return 0;
}