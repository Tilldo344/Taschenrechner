#include <iostream>
using namespace std;

char abf1;
char abf2;
float zahlen[2];
float ergebnis;


int main()
{
	

	cout << "       *-------------------------------------------------------------------------------*" << endl;
	cout << "       |                                                                               |" << endl;
	cout << "       |                               Taschenrechner                                  |" << endl;
	cout << "       |                                                                               |" << endl;
	cout << "       *-------------------------------------------------------------------------------*" << endl;



	cout << "\n\ngib deine erste zahl an:   ";
	cin >> zahlen[0];
	cout << "\n";
	cout << "gib deine zweite zahl an:  ";
	cin >> zahlen[1];

	cout << "\ngib deinen gewuenschten rechenoperator an:    plus      minus     mal       geteilt  \n";
	cout << "                                               +          -        *           /       \n";
	cin >> abf1;


	switch (abf1) {

	case '+':

		ergebnis = zahlen[0] + zahlen[1];
		cout << "Dein ergebnis ist: " << (ergebnis);
 
		break;

	case '-':

		ergebnis = zahlen[0] - zahlen[1];
		cout << "Dein ergebnis ist: " << (ergebnis);

		break;

	case '*':
		ergebnis = zahlen[0] * zahlen[1];
		cout << "Dein ergebnis ist: " << (ergebnis);

		break;

	case '/':
		ergebnis = zahlen[0] / zahlen[1];
		cout << "Dein ergebnis ist: " << (ergebnis);

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

