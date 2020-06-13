#include "RPS.h"

RPS::RPS() {
	comLive = 0;
	playerLive = 0;
}
RPS::RPS(int comLive, int playerLive) {
	this->comLive = comLive;
	this->playerLive = playerLive;
}
//設置電腦生命值
void RPS::setCom(int comLive) {
	this->comLive = comLive;
}
//設置玩家生命值
void RPS::setPlayer(int playerLive) {
	this->playerLive = playerLive;
}
//回傳電腦生命值
int RPS::getCom() const {
	return comLive;
}
//回傳玩家生命值
int RPS::getPlayer() const {
	return playerLive;
}
//回傳額外分數
int RPS::getPoint() {
	return point;
}
//電腦出拳
int RPS::com() const {
	srand(time(NULL));
	int x = rand();
	x %= 3;
	return x;
}
//玩家出拳
int RPS::playeuser() const {
	int x;
	cout << "可以出拳囉XD: ";
	cin >> x;
	cout << "---------------------------\n";
	if (x <= 2 and x >= 0) {
		return x;
	}
	else {
<<<<<<< HEAD
		cout << "輸囉~!!\n小孩不要氣餒~ 鼻要哭哭~ !\n再你在一次機會\n" << "---------------------------\n";
		return player();
=======
		cout << "輸囉~!!\n小孩不要氣餒~鼻要哭哭~!\n再你在一次機會\n" << "---------------------------\n";
		return playeuser();
>>>>>>> de5ec07d127e9fc6316c5d15cfbdae0df2bf6214
	}
}
//判定勝負	
int RPS::dual() {
	int x = com();
	int y = playeuser();
	if (x == y) {
		cout << "再來一次 " << endl;
		cout << "---------------------------\n";
		system("pause");
		return dual();
	}
	else if ((x == 2 && y == 0) or (x == 1 && y == 2) or (x == 0 && y == 1)) {
		cout << "電腦得分: " << endl;
		cout << "---------------------------\n";
		switch (x) {
		case 0:
			playerLive -= 2;
			point += 2;
			break;
		case 1:
			playerLive -= 5;
			comLive += 2;
			point += 3;
			break;
		case 2:
			comLive += 5;
			point -= 5;
			break;
		}
	}
	else {
		cout << "玩家得分: " << endl;
		cout << "---------------------------\n";
		switch (y) {
		case 0:
			comLive -= 2;
			point += 2;
			break;
		case 1:
			comLive -= 5;
			playerLive += 2;
			point += 3;
			break;
		case 2:
			playerLive += 5;
			point -= 5;
			break;
		}
	}
}
int RPS::point = 20;