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
	void setCom(int);//設置電腦生命值
	void setPlayer(int);//設置玩家生命值
	int getCom() const;//回傳電腦生命值
	int getPlayer()const;//回傳玩家生命值
	static int getPoint();//回傳額外分數
	int com()const;//電腦出拳
	int playeuser()const;//玩家出拳
	int dual();//判定勝負
private:
	int comLive;//電腦生命
	int playerLive;//玩家生命
	static int point;//額外分數
};

#endif
