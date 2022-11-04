#include <iostream>
#include <ctime>
#include "Viselica.h"
#include "list.h"
#include "Word.h"
using namespace std;

int main() {
	int choice;
	List list("list.txt");
	do //до выхода пользователя
	{
		system("cls");
		system("Color 0A");
		cout << "Hello! This is the game! To Play tap 1, to add a word tap 2, to clear the word list tap 3, to exit tup 0\nGood luck!\n";
		cin >> choice;
		system("cls");
		switch (choice) { //выбор
			case 1: { //непосредственно игра
				system("Color 0C");
				Viselica paint;
				Word word(list.random());
				char letter;
				int start_time = clock();
				do
				{
					system("cls");
					cout << "\n";
					paint.print(word.geterrors());
					cout << "\n";
					word.getempty();
					cout << "\n";
					word.printfaultletters(); // выше выводится статистика
					cout << "\n" << "Let's try some letter:\n\t\t";
					cin >> letter;
					word.checkletter(letter); //как по мне самое главное, проверка на правильность буквы
				} while (!word.lost() && !word.won());

				system("cls");
				//system("pause");
				system("Color 0D");

				paint.print(word.geterrors());

				cout << "This was your word: " << word.getourword(); //финал и результат

				int end_time = clock();
				int search_time = end_time - start_time;
				cout <<"\n\nYou played the game for " << search_time / 1000 << " seconds"<<endl;

				/*system("pause");

				system("cls");*/
				if (word.lost()) {
					cout << "\n\n\t\tYOU DIED!\n\n\n" << endl;
				}
				else if (word.won()) {
					cout << "\n\n\t\tYOU WON!\n\n\n" << endl;
				}
				system("pause");
				break;
			}
			case 2: { //добавление слова
				system("cls");
				system("Color 0E");
				list.Addword();
				break;
			}
			case 3: { //отчищенеи списка слов
				list.Clean();
				break;
			}
			
		}
	} while (choice!=0);
	system("cls");
	cout << "Thank you! Bye!"; //выход
	system("pause");
}