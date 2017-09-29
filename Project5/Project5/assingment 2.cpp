/*
Youssef Khalifa - 9.25 2nd
Take in data
display data, acept use response, display change to data
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
					 // Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	// Variable
	int wonders_of_the_world;
	char answer_choice;
		// set bool to false and assume they didn't choose "C"
		bool answersMatched = false; // did they get the same answer as you on the amount of wonders in th world
		double averageIQGuess;
		//user queries
		cout << "How many wonders of the world are there? : ";
	cin >> wonders_of_the_world;
	cout << "what did you put for question 7b (a/b/c/d) : ";
	cin >> answer_choice;
		if (answer_choice == 'c' || answer_choice == "C") {
			cout << "what is the verage IQ : ";
			answrsMarched = true
		}
	cout << "what is the verage IQ : ";



	// Display Text
	pause(); // pauses to see the displayed text
}
