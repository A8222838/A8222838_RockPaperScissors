#include "RPS.h"

//遊戲標頭
void start() {
	cout << "---------------------------\n" << "\n~單純的猜拳~\n\n" << "---------------------------\n";
	system("pause");
	cout << "---------------------------\n";
}
//規則
void  rule() {
	cout << "\n[ 0為石頭 ] [ 1為剪刀 ] [ 2為布 ]"
		<< "\n出布贏 [得5分]\n出剪刀贏 [得2分]\n出石頭贏 [沒得分]"
		<< "\n出布輸 [扣5分]\n出剪刀輸 [扣2分]\n出石頭輸 [不扣分]"
		<< "\n直到一方分數歸零或是額外分數歸零時"
		<< "\n{([遊戲結束])}"
		<< "\n分數高的獲勝"
		<< "\n\n---------------------------\n";
	system("pause");
	cout << "---------------------------\n";
}
//設置難易度
void setDate(RPS& a) {
	int x;
	cout << "\n1:[低血量] 2:[中血量] 3:[高血量]";
	cout << "\n請選擇難易度: ";
	cin >> x;
	cout << "\n---------------------------";
	if (x > 3 or x < 1) {
		cout << "\n輸入錯誤\n麻煩再來一次"<< "\n---------------------------";
		return setDate(a);
	}
	else {
		switch (x) {
		case 1:
			a.setCom(10);
			a.setPlayer(10);
			cout << "\n您選擇了低血量";
			cout << "\n---------------------------";
			break;
		case 2:
			a.setCom(20);
			a.setPlayer(20);
			cout << "\n您選擇了中血量";
			cout << "\n---------------------------";
			break;
		case 3:
			a.setCom(30);
			a.setPlayer(30);
			cout << "\n您選擇了高血量";
			cout << "\n---------------------------";
			break;
		}
	}
	cout << endl;
}
//遊戲運行(迴圈
void game(RPS rps) {
	while (rps.getCom() > 0 and rps.getPlayer() > 0 and rps.getPoint() > 0) {
		cout << "玩家生命值: " << rps.getPlayer() << "\n電腦生命值: " << rps.getCom() << "\n額外點數: " << rps.getPoint() << "\n\n";//生命值顯示
		rps.dual();//猜拳判定
	}//迴圈
}
//勝負判定
void winOrLose(RPS rps) {
	if (rps.getCom() <= 0) cout << "\n贏了很猛~  繼續~\n\n";//
	else if (rps.getPlayer() <= 0) cout << "\n 輸給電腦  太弱了唷~~ \n\n";
	else {
		if (rps.getCom() < rps.getPlayer()) cout << "\n贏了很厲害484呀~  ㄚㄚㄚ~\n\n";
		else if (rps.getCom() > rps.getPlayer()) cout << "\n輸給電腦~  太弱了唷~  這樣不行唷 > < \n\n";
		else cout << "\n看來你還要多多練習唷  ㄎㄎ \n\n";
	}
}
//主函式
int main() {
	start();//輸出標頭
	rule();//輸出規則
	RPS rps;//宣告rps
	setDate(rps);//難易度調整
	game(rps);//遊戲運行(迴圈
	winOrLose(rps);//勝負判定
	system("pause");
	return 0;
}