#include "RPS.h"

//�C�����Y
void start() {
	cout << "---------------------------\n" << "\n~��ª��q��~\n\n" << "---------------------------\n";
	system("pause");
	cout << "---------------------------\n";
}
//�W�h
void  rule() {
	cout << "\n[ 0�����Y ] [ 1���ŤM ] [ 2���� ]"
<<<<<<< HEAD
		<< "\n�X��Ĺ [ �o5�� ]\n�X�ŤMĹ [ �o2�� ]\n�X���YĹ [ �S�o�� ]"
		<< "\n�X���� [ ��5�� ]\n�X�ŤM�� [ ��2�� ]\n�X���Y�� [ ������ ]"
		<< "\n����@������k�s�άO�B�~�����k�s��"
		<< "\n{ ( [ �C������ ] ) }"
=======
		<< "\n�X��Ĺ [�o5��]\n�X�ŤMĹ [�o2��]\n�X���YĹ [�S�o��]"
		<< "\n�X���� [��5��]\n�X�ŤM�� [��2��]\n�X���Y�� [������]"
		<< "\n����@������k�s�άO�B�~�����k�s��"
		<< "\n{([�C������])}"
>>>>>>> a21a4cb1e7f5723e0a73bfde384bbf5b466b7e09
		<< "\n���ư������"
		<< "\n\n---------------------------\n";
	system("pause");
	cout << "---------------------------\n";
}
//�]�m������
void setDate(RPS& a) {
	int x;
	cout << "\n1:[�C��q] 2:[����q] 3:[����q]";
	cout << "\n�п��������: ";
	cin >> x;
	cout << "\n---------------------------";
	if (x > 3 or x < 1) {
<<<<<<< HEAD
		cout << "\n[��J���~]\n�·ЦA�Ӥ@��"<< "\n---------------------------";
=======
		cout << "\n��J���~\n�·ЦA�Ӥ@��"<< "\n---------------------------";
>>>>>>> a21a4cb1e7f5723e0a73bfde384bbf5b466b7e09
		return setDate(a);
	}
	else {
		switch (x) {
		case 1:
			a.setCom(10);
			a.setPlayer(10);
<<<<<<< HEAD
			cout << "\n�z��ܤF [�C��q]";
=======
			cout << "\n�z��ܤF�C��q";
>>>>>>> a21a4cb1e7f5723e0a73bfde384bbf5b466b7e09
			cout << "\n---------------------------";
			break;
		case 2:
			a.setCom(20);
			a.setPlayer(20);
<<<<<<< HEAD
			cout << "\n�z��ܤF [����q]";
=======
			cout << "\n�z��ܤF����q";
>>>>>>> a21a4cb1e7f5723e0a73bfde384bbf5b466b7e09
			cout << "\n---------------------------";
			break;
		case 3:
			a.setCom(30);
			a.setPlayer(30);
<<<<<<< HEAD
			cout << "\n�z��ܤF [����q]";
=======
			cout << "\n�z��ܤF����q";
>>>>>>> a21a4cb1e7f5723e0a73bfde384bbf5b466b7e09
			cout << "\n---------------------------";
			break;
		}
	}
	cout << endl;
}
//�C���B��(�j��
void game(RPS rps) {
	while (rps.getCom() > 0 and rps.getPlayer() > 0 and rps.getPoint() > 0) {
<<<<<<< HEAD
		cout << "���a[�ͩR��] : " << rps.getPlayer() << "\n�q��[�ͩR��] : " << rps.getCom() << "\n[�B�~�I��] : " << rps.getPoint() << "\n\n";//�ͩR�����
=======
		cout << "���a�ͩR��: " << rps.getPlayer() << "\n�q���ͩR��: " << rps.getCom() << "\n�B�~�I��: " << rps.getPoint() << "\n\n";//�ͩR�����
>>>>>>> a21a4cb1e7f5723e0a73bfde384bbf5b466b7e09
		rps.dual();//�q���P�w
	}//�j��
}
//�ӭt�P�w
void winOrLose(RPS rps) {
<<<<<<< HEAD
	if (rps.getCom() <= 0) cout << "\nĹ�F�ܲr��~  �~��~\n\n";//
	else if (rps.getPlayer() <= 0) cout << "\n �鵹�q��  �Ӯz�F��~~ �n�A�[�o~~\n\n";
	else {
		if (rps.getCom() < rps.getPlayer()) cout << "\nĹ�F484�ܼF�`�r~  ������~\n\n";
		else if (rps.getCom() > rps.getPlayer()) cout << "\n�鵹�q��~  �Ӯz�F��~  �o�˥����� > < \n\n";
		else cout << "\n�ݨӧA�٭n�h�h�m�߭�~~  �}�} \n\n";
=======
	if (rps.getCom() <= 0) cout << "\nĹ�F�ܲr~  �~��~\n\n";//
	else if (rps.getPlayer() <= 0) cout << "\n �鵹�q��  �Ӯz�F��~~ \n\n";
	else {
		if (rps.getCom() < rps.getPlayer()) cout << "\nĹ�F�ܼF�`484�r~  ������~\n\n";
		else if (rps.getCom() > rps.getPlayer()) cout << "\n�鵹�q��~  �Ӯz�F��~  �o�ˤ���� > < \n\n";
		else cout << "\n�ݨӧA�٭n�h�h�m�߭�  �}�} \n\n";
>>>>>>> a21a4cb1e7f5723e0a73bfde384bbf5b466b7e09
	}
}
//�D�禡
int main() {
	start();//��X���Y
	rule();//��X�W�h
	RPS rps;//�ŧirps
	setDate(rps);//�����׽վ�
	game(rps);//�C���B��(�j��
	winOrLose(rps);//�ӭt�P�w
	system("pause");
	return 0;
}