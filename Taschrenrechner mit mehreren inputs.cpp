#include <iostream>
using namespace std;


char abf1;
char abf3;
int zahl1;
int zahl2;
float zahlen[3];


int main()
{
  
	cout << "       *-------------------------------------------------------------------------------*" << endl;
	cout << "       |                                                                               |" << endl;
	cout << "       |                               Taschenrechner                                  |" << endl;
	cout << "       |                                                                               |" << endl;
	cout << "       |                                                                               |" << endl;
	cout << "       |                +           -             *                 /                  |" << endl;
	cout << "       |              plus        minus          mal             geteilt               |" << endl;
	cout << "       |                                                                               |" << endl;
	cout << "       *-------------------------------------------------------------------------------*" << endl;


	cout << "\ngib eine zahl an: ";
	cin >> zahlen[0];
	

	

		while (abf1 != '=') {

			abf1 = 'b';

			cout << "Dein gewuenschter operator: ";
			cin >> abf1;


			if (abf1 != '=') {


				cout << "Gib eine neue Zahl an: ";
				cin >> zahlen[1];


				abf3 = abf1;

				switch (abf3) {

				case '+':
					zahlen[0] = zahlen[0] + zahlen[1];

					break;

				case '-':
					zahlen[0] = zahlen[0] - zahlen[1];


					break;

				case '*':
					zahlen[0] = zahlen[0] * zahlen[1];

					break;

				case '/':
					zahlen[0] = zahlen[0] / zahlen[1];

					break;

  }


			

			}

		}

	

	
	if (abf1 == '=') {

		cout << "dein Ergebnis ist " << zahlen[0];

	}


	

	
	
}

