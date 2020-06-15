#include "RPS.h"

RPS::RPS() {
	comLive = 0;
	playerLive = 0;
}
RPS::RPS(int comLive, int playerLive) {
	this->comLive = comLive;
	this->playerLive = playerLive;
}
//�]�m�q���ͩR��
void RPS::setCom(int comLive) {
	this->comLive = comLive;
}
//�]�m���a�ͩR��
void RPS::setPlayer(int playerLive) {
	this->playerLive = playerLive;
}
//�^�Ǧܹq���ͩR��
int RPS::getCom() const {
	return comLive;
}
//�^�Ǧܪ��a�ͩR��
int RPS::getPlayer() const {
	return playerLive;
}
//�^�Ǧ��B�~����
int RPS::getPoint() {
	return point;
}
//�q���X��
int RPS::com() const {
	srand(time(NULL));
	int x = rand();
	x %= 3;
	return x;
}
//���a�X��
int RPS::player() const {
	int x;
	cout << "�i�H�X���oXD: ";
	cin >> x;
	cout << "---------------------------\n";
	if (x <= 2 and x >= 0) {
		return x;
	}
	else {
		cout << "��n�åX~!!\n�p�Ĥ��n�ˤC�C~ ��n����~ !\n�A���A�b�@�����|\n" << "---------------------------\n";
		return player();
	}
}
//�P�w�q���ӭt	
int RPS::dual() {
	int x = com();
	int y = player();
	if (x == y) {
		cout << "�A�Ӥ@�����|�� " << endl;
		cout << "---------------------------\n";
		system("pause");
		return dual();
	}
	else if ((x == 2 && y == 0) or (x == 1 && y == 2) or (x == 0 && y == 1)) {
		cout << "�q���o�� " << endl;
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
		cout << "���a�o�� " << endl;
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
int RPS::point = 30;