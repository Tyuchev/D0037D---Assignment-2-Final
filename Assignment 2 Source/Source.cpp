// Task 7

#include "libh.h"


int main()
{

	int option;

	cout << "Please choose a task to run from the following menu: " << endl;
	cout << "1: Task 1" << endl;
	cout << "2: Task 2" << endl;
	cout << "3: Task 3" << endl;
	cout << "4: Task 4" << endl;
	cout << "5: Task 5" << endl;
	cout << "6: Task 6" << endl;
	cout << "-1: Exit" << endl;
	cout << endl;

	cin >> option;

	switch (option)
	{

	case 1:
		task1();
		cin.clear();
		cout << endl;
		break;

	case 2:
		task2();
		cin.clear();
		cout << endl;
		break;

	case 3:

		task3();
		cin.clear();
		cout << endl;
		break;

	case 4:

		task4();
		cin.clear();
		cout << endl;
		break;

	case 5:

		task5();
		cin.clear();
		cout << endl;
		break;

	case 6:

		task6();
		cin.clear();
		cout << endl;
		break;

	case (-1):
		cout << "Goodbye" << endl;
		cout << endl;
		break;

	}
	return 0;
}

