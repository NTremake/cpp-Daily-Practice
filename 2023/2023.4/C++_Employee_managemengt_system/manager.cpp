#define _CRT_SECURE_NO_WARINGS
#include <iostream>
using namespace std;
#include "manager.h"

Manager::Manager(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deptId = did;
}

void Manager::showInfo()
{
	cout << "职工编号：" << this->m_id
		<< "\t职工姓名：" << this->m_name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责：完成老板委托的工作，并下发任务给员工。" << endl;
}

string Manager::getDeptName()
{
	return string("经理");
}