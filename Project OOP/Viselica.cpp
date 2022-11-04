#include "Viselica.h"

void Viselica::print(int x)
{
	if (x == 0) {
		cout << "\n\n\n\n\n _________\n" << endl;
	}
	else if (x == 1) {
		cout << "\n|\n|\n|\n|\n|_________\n"<<endl;
	}
	else if (x == 2) {
		cout << "#========\n|\n|\n|\n|\n|_________\n" << endl;
	}
	else if (x == 3) {
		cout <<"#========\n|    |\n|    0\n|\n|\n|_________\n" << endl;
	}
	else if (x == 4) {
		cout <<"#========\n|    |\n|    0\n|   { }\n|\n|_________\n" << endl;
	}
	else if (x == 5) {
		cout << "#========\n|    |\n|    0\n|  ({ } \n|\n|_________\n" << endl;
	}
	else if (x == 6) {
		cout << "#========\n|    |\n|    0\n|  ({ })\n|\n|_________\n" << endl;
	}
	else if (x == 7) {
		cout << "#========\n|    |\n|    0\n|  ({ })\n|   | | \n|_________\n" << endl;
	}
}
