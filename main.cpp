#include "RPS.h"

//�C�����Y
void start() {
	cout << "---------------------------\n" << "\n~��ª��q��~\n\n" << "---------------------------\n";
	system("pause");
	cout << "---------------------------\n";
}
//�W�h
void  rule() {
	cout << "\n0�����Y 1���ŤM 2����"
		<< "\n�X��Ĺ �o5��\n�X�ŤMĹ �o2��\n�X���YĹ �h�S��"
		<< "\n�X���� ��5��\n�X�ŤM�� ��2��\n�X���Y�� ������"
		<< "\n����@������k�s���B�~�����k�s��"
		<< "\n�C������"
		<< "\n���ư������"
		<< "\n\n---------------------------\n";
	system("pause");
	cout << "---------------------------\n";
}
//�]�m������
void setDate(RPS& a) {
	int x;
	cout << "\n1:�C��q 2:����q 3:����q";
	cout << "\n��J������: ";
	cin >> x;
	cout << "\n---------------------------";
	if (x > 3 or x < 1) {
		cout << "\n��J���~\n�A�Ӥ@��"<< "\n---------------------------";
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
//�D�禡
int main() {
	start();//�]�m�}�Y
	rule();//�]�m�W�h
	RPS rps;//�ŧirps
	setDate(rps);//�ͩR�ȳ]�m
	while (rps.getCom() > 0 and rps.getPlayer() > 0 and rps.getPoint() > 0) {
		cout << "���a�ͩR: " << rps.getPlayer() << "\n�q���ͩR: " << rps.getCom() << "\n�B�~����: : " << rps.getPoint() << "\n\n";//�ͩR�����
		rps.dual();//�q���P�w
	}//�j��
	if (rps.getCom() <= 0) cout << "\nĹ�F�ܲr~�~��~\n\n";//
	else if (rps.getPlayer() <= 0) cout << "\n �鵹�q�� �Ӯz�F�� \n\n";
	else {
		if (rps.getCom() < rps.getPlayer()) cout << "\nĹ�F�ܼF�`484�r~������~\n\n";
		else if (rps.getCom() > rps.getPlayer()) cout << "\n�鵹�q��~�Ӯz�F��~�o�ˤ���� > < \n\n";
		else cout << "\n�ݨӧA�٭n�h�h�m�߭�}�}\n\n";
	}
	system("pause");
	return 0;
}