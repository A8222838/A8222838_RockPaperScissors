#include "RPS.h"

//遊戲標頭
void start() {
	cout << "---------------------------\n" << "\n~單純的猜拳~\n\n" << "---------------------------\n";
	system("pause");
	cout << "---------------------------\n";
}
//規則
void  rule() {
	cout << "\n0為石頭 1為剪刀 2為布"
		<< "\n出布贏 得5分\n出剪刀贏 得2分\n出石頭贏 則沒分"
		<< "\n出布輸 扣5分\n出剪刀輸 扣2分\n出石頭輸 不扣分"
		<< "\n直到一方分數歸零或額外分數歸零時"
		<< "\n遊戲結束"
		<< "\n分數高的獲勝"
		<< "\n\n---------------------------\n";
	system("pause");
	cout << "---------------------------\n";
}
//設置難易度
void setDate(RPS& a) {
	int x;
	cout << "\n1:低血量 2:中血量 3:高血量";
	cout << "\n輸入難易度: ";
	cin >> x;
	cout << "\n---------------------------";
	if (x > 3 or x < 1) {
		cout << "\n輸入錯誤\n再來一次"<< "\n---------------------------";
		return setDate(a);
	}
	else {
		switch (x) {
		case 1:
			a.setCom(10);
			a.setPlayer(10);
			break;
		case 2:
			a.setCom(20);
			a.setPlayer(20);
			break;
		case 3:
			a.setCom(30);
			a.setPlayer(30);
			break;
		}
	}
	cout << endl;
}
//主函式
int main() {
	start();//設置開頭
	rule();//設置規則
	RPS rps;//宣告rps
	setDate(rps);//生命值設置
	while (rps.getCom() > 0 and rps.getPlayer() > 0 and rps.getPoint() > 0) {
		cout << "玩家生命: " << rps.getPlayer() << "\n電腦生命: " << rps.getCom() << "\n額外分數: : " << rps.getPoint() << "\n\n";//生命值顯示
		rps.dual();//猜拳判定
	}//迴圈
	if (rps.getCom() <= 0) cout << "\n贏了很猛~繼續~\n\n";//
	else if (rps.getPlayer() <= 0) cout << "\n 輸給電腦 太弱了唷 \n\n";
	else {
		if (rps.getCom() < rps.getPlayer()) cout << "\n贏了很厲害484呀~ㄚㄚㄚ~\n\n";
		else if (rps.getCom() > rps.getPlayer()) cout << "\n輸給電腦~太弱了唷~這樣不行唷 > < \n\n";
		else cout << "\n看來你還要多多練習唷ㄎㄎ\n\n";
	}
	system("pause");
	return 0;
}