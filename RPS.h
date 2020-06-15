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
	int getCom() const;//回傳至電腦生命值
<<<<<<< HEAD
	int getPlayer() const;//回傳至玩家生命值
	static int getPoint();//回傳至額外分數
	int com() const;//電腦出拳
	int player() const;//玩家出拳
=======
	int getPlayer()const;//回傳至玩家生命值
	static int getPoint();//回傳至額外分數
	int com()const;//電腦出拳
	int player()const;//玩家出拳
>>>>>>> a21a4cb1e7f5723e0a73bfde384bbf5b466b7e09
	int dual();//判定猜拳勝負
private:
	int comLive;//電腦生命
	int playerLive;//玩家生命
	static int point;//額外分數
};

#endif
