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
	int getCom() const;//�^�Ǧܹq���ͩR��
<<<<<<< HEAD
	int getPlayer() const;//�^�Ǧܪ��a�ͩR��
	static int getPoint();//�^�Ǧ��B�~����
	int com() const;//�q���X��
	int player() const;//���a�X��
=======
	int getPlayer()const;//�^�Ǧܪ��a�ͩR��
	static int getPoint();//�^�Ǧ��B�~����
	int com()const;//�q���X��
	int player()const;//���a�X��
>>>>>>> a21a4cb1e7f5723e0a73bfde384bbf5b466b7e09
	int dual();//�P�w�q���ӭt
private:
	int comLive;//�q���ͩR
	int playerLive;//���a�ͩR
	static int point;//�B�~����
};

#endif
