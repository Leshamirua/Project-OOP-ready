#include "Word.h"

Word::Word(string w)
{
	ourword = w;
	succesnum = 0;
	errors = 0;
	empty = new char[ourword.length() + 1];
	for (int i = 0; i < ourword.length() + 1; i++) {//��������� ������ �����
		empty[i] = '-';
	}
	empty[ourword.length()] = '\0';
}

Word::~Word()
{
	delete[]empty;
}

void Word::checkletter(char c)
{
	short check = 1;
	for (int i = 0; i <= ourword.length(); i++) {//���� � ������� ������������ ����� �����
		if (c == ourword[i]) {
			empty[i] = c;
			succesnum++;
			check = 0;
		}
	}
	if (check == 1) {//���� ����� ��������, ����� ��� ����������� � ������ ������
		for (int i = 0; i <= faultlist.length(); i++)
			if (c == faultlist[i]) {
				errors++;
				faultlist.insert(faultlist.end(), c);
			}
	}
}

void Word::getempty()
{
	cout << empty << endl;
}

string Word::getourword()
{
	return ourword;
}

int Word::geterrors()
{
	return errors;
}

void Word::printfaultletters()
{
	cout << "You used these wrong letters:  "<< faultlist;
}

bool Word::lost()
{
	if (errors == 7) { //�������� �� ��������
		return true;
	}
	else
	{
		return false;
	}
}

bool Word::won()
{
	if (succesnum == ourword.length()) {//�������� �� �������
		return true;
	}
	else {
		return false;
	}
}
