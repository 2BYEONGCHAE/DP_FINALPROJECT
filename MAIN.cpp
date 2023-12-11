#include "Gamemanager.h"


int main() {
	string playername;
	cout << "당신의 이름은 무엇인가요? : ";
	cin >> playername;


	Player player(playername);
	Gamemanager gamemanager(player);
	gamemanager.playgame();

	return 0;
}