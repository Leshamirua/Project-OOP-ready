#pragma once
#include <iostream>
#include<fstream>
#include<ctime>
using namespace std;
class List
{
	string path;
	int count;
public:
	List(string p);// �����������
	void Addword();//���������� �����
	string random(); //��������� ����� �����
	int getcount();//�������� � ���������� ���� � ������
	void recount();//�������� ���� � ������
	void Clean();//�������� ���� �� ������

};


