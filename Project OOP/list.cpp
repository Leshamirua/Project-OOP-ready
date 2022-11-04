#include "list.h"

List::List(string p)
{
	path = p;
	count = getcount();
}

int List::getcount()
{
	recount();
	return count;
}

void List::recount()
{
	count = 0;
	ifstream file(path, ios::out);
	char n;
	while (!file.eof()) {
		n = file.get();
		if (n == '\n') {
			count+=1;
		}
	}
	file.close();
}

string List::random()
{
	string ourword;
	recount();
	if (count == 0) {
		cout << "no enough words";
		Addword();
	}
	srand(time(NULL));
	ifstream file(path, ios::out);
	int random = 1 + rand() % getcount();
	for (int i = 0; i < random; i++) {
		file >> ourword;
	}
	file.close();
	return ourword;
}

void List::Addword()
{
	char tmp[100];
	cout << "Enter word:\t";
	cin >> tmp;
	ofstream file(path, ios::app | ios::out);
	file << "\n" << tmp;
	file.close();
	recount();
}

void List::Clean()
{
	fstream file("vocab.txt", ios::out | ios::trunc);
	file.close();
}
