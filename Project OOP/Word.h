#pragma once
#include <iostream>
using namespace std;
class Word
{
	string ourword;
	string faultlist;
	char* empty;
	int succesnum;
	int errors;
public:
	Word(string w); //�����������
	~Word();//����������
	void checkletter (char c);//��� �� ��� ����� �������, �������� �� ������������ �����
	void getempty();//����� ����
	string getourword();//����� ����������� �����
	int geterrors(); //������
	void printfaultletters();//����� ������������ ����
	bool lost();// �������� �� ��������
	bool won();// �������� �� ������
};
