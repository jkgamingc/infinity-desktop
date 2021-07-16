#include "App.h"

bool App::isrunning()
{
	return running=true;
}

void App::downloads()
{
	cout << "\t" << "Downloads" << endl;
	cout << "You will find everything made by us here." << endl;
	cout << endl;
	cout << "Infnite search" << endl;
	cout << "Infinite search is a search engine made by jkgaming(not real name) using html, css and google programmable search engine" << endl;
	cout << "Link of infinite search - https://60e2c8bd26405e0c3d9a30a3--flamboyant-johnson-b50c62.netlify.app/" << endl;
}

void App::menu()
{

	this->isrunning();

	while (running) {

		system("cls");

		cout << "Welcome to infinity desktop" << endl;

		cout << "1)Our website" << endl;
		cout << "2)downloads" << endl;
		cout << "3)about us" << endl;
		cout << "4)exit" << endl;

		cin >> option;

		if (option == 1) {
			system("start chrome https://keen-snyder-206159.netlify.app ");
		}

		if (option == 2) {
			system("cls");
			this->downloads();
			_getch();
		}

		if (option == 3) {
			system("cls");
			cout << "this is the official website of infinity. Infinity is a team. We make software together." << endl;
			_getch();
		}

		if (option == 4) {
			running = false;
		}

	}

}
