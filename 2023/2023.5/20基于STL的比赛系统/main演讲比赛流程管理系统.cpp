#include <iostream>
using namespace std;
#include "speechManager.h"
#include <ctime>

int main() {
	srand((unsigned int )time(nullptr));
	speechManager sm;
	int choice = 0;
	while (true) {
		sm.show_Menu();
		cout << "请输入您的选择：" << endl;
		cin >> choice;
		switch (choice) {

		case 1:		//开始比赛
			sm.startSpeech();
			break;
		case 2:		//查看比赛记录
			sm.loadRecord();
			sm.showRecord();
			break;
		case 3:		//清空比赛
			sm.clearRecord();
			break;
		case 0:		//退出比赛
			sm.exitSystem();
			break;
		default:
			cout << "输入错误，请重新输入" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}