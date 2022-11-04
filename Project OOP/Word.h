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
	Word(string w); //конструктор
	~Word();//деструктор
	void checkletter (char c);//как по мне самое главное, проверка на правильность буквы
	void getempty();//показ поля
	string getourword();//показ загаданного слова
	int geterrors(); //ошибки
	void printfaultletters();//показ используемых букв
	bool lost();// проверка на проигрыш
	bool won();// проверка на победу
};
