#ifndef RPS_H
#define RPS_H
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
class RPS {
public:
	RPS();
	RPS(int, int);
	void setCom(int);//�]�m�q���ͩR��
	void setPlayer(int);//�]�m���a�ͩR��
	int getCom() const;//�^�ǹq���ͩR��
	int getPlayer()const;//�^�Ǫ��a�ͩR��
	static int getPoint();//�^���B�~����
	int com()const;//�q���X��
	int playeuser()const;//���a�X��
	int dual();//�P�w�ӭt
private:
	int comLive;//�q���ͩR
	int playerLive;//���a�ͩR
	static int point;//�B�~����
};

#endif
