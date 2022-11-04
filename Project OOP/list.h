#pragma once
#include <iostream>
#include<fstream>
#include<ctime>
#include <string>
using namespace std;
class List
{
	string path;
	int count;
public:
	List(string p);// конструктор
	void Addword();//добавление слова
	string random(); //рандомный выбор слова
	int getcount();//аксессор к количеству слов в списке
	void recount();//пересчет слов в списке
	void Clean();//удаление слов из списка

};


