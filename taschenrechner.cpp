#include <iostream>
using namespace std;


int abf1;
char abf2;
int abf3;
float zahl1;
float zahl2;
float zahl3;
float ergebniss;


int main() {


	cout << ("moechtest du    plus       minus      mal       geteilt      rechnen");
	cout << ("\n                 1           2         3          4 \n\n");
	cin >> abf1;

	if (abf1 > 4) {
		printf("\033c");
		cout << ("versuche es erneut\n\n");

		main();

	}

	switch (abf1) {

	case 1:
		cout << ("gib deine erste zahl an   ");
		cin >> zahl1;
		cout << ("\ngib deine zweite zahl ein   ");
		cin >> zahl2;
		ergebniss = zahl1 + zahl2;
		cout << ("dein ergebniss ist:  ") << (ergebniss);

		break;


	case 2:

		cout << ("gib deine erste zahl an   ");
		cin >> zahl1;
		cout << ("\ngib deine zweite zahl ein   ");
		cin >> zahl2;
		ergebniss = zahl1 - zahl2;
		cout << ("dein ergebniss ist:  ") << (ergebniss);

	
		break;



	case 3:

		cout << ("gib deine erste zahl an   ");
		cin >> zahl1;
		cout << ("\ngib deine zweite zahl ein   ");
		cin >> zahl2;
		ergebniss = zahl1 * zahl2;
		cout << ("dein ergebniss ist:  ") << (ergebniss);

		break;


	case 4:

		cout << ("gib deine erste zahl an   ");
		cin >> zahl1;
		cout << ("\ngib deine zweite zahl ein   ");
		cin >> zahl2;
		ergebniss = zahl1 / zahl2;
		cout << ("dein ergebniss ist:  ") << (ergebniss);

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

