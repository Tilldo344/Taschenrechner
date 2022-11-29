#include <iostream>
using namespace std;

char abf1;
char abf2;
float zahl1;
float zahl2;
float ergebnis;


int main()
{
	

	cout << "       *-------------------------------------------------------------------------------*" << endl;
	cout << "       |                                                                               |" << endl;
	cout << "       |                               Taschenrechner                                  |" << endl;
	cout << "       |                                                                               |" << endl;
	cout << "       *-------------------------------------------------------------------------------*" << endl;



	cout << "\n\ngib deine erste zahl an:   ";
	cin >> zahl1;
	cout << "\n";
	cout << "gib deine zweite zahl an:  ";
	cin >> zahl2;

	cout << "\ngib deinen gewuenschten rechenoperator an:    plus      minus     mal       geteilt  \n";
	cout << "                                               +          -        *           /       \n";
	cin >> abf1;


	switch (abf1) {

	case '+':

		ergebnis = zahl1 + zahl2;
		cout << "Dein ergebnis ist" << (ergebnis);
 
		break;

	case '-':

		ergebnis = zahl1 - zahl2;
		cout << "Dein ergebnis ist" << (ergebnis);

		break;

	case '*':
		ergebnis = zahl1 * zahl2;
		cout << "Dein ergebnis ist" << (ergebnis);

		break;

	case '/':
		ergebnis = zahl1 / zahl2;
		cout << "Dein ergebnis ist" << (ergebnis);

		break;

	}

	cout << "\n\nmoechtest du mit du noch weiter rechnen?         y=ja   n=nein\n";
	cin >> abf2;

	switch (abf2) {

	case 'n':

		exit(0);

		break;



	case 'y':
		printf("\033c");
		main();



 }





}

