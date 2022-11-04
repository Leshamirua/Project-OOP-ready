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
	string line;
	while (getline(file, line))
		count++;
	file.close();
}

string List::random()
{
	string ourword;
	recount();
	if (count < 1) {
		cout << "Not enough words" << endl;
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
	file << tmp << "\n";
	file.close();
	recount();
}

void List::Clean()
{
	fstream file("list.txt", ios::out | ios::trunc);
	file.close();
}
