// Standard input output library
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
	// Ms Jenkins
	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "On a cold winter you decide to escape to the library. Your favorite place in town." << endl;
	cout << "Mean old Ms. Jenkins gives you the side eye knowing you will make a mess digging through her precious stacks of books." << endl;
	cout << "Ms. Jenkins declares \"Back again I see... What aisle will you be making a mess of this time?\"" << endl;
	cout << "You smile her and pretend to ignore her. Continuing on with your trip to the library." << endl;

	// Library digging
	cout << endl;
	cout << "Digging through the library you discover a peculiar machine in the corner." << endl;
	cout << endl;
	cout << "Something possessing you, you decide to investigate further." << endl;
	cout << "It appears to be a very old computer." << endl;
	cout << "You think to yourself 'No wonder why this piece of junk was left alone.'" << endl;

	// The player sees a button
	cout << endl;
	cout << "You inspect the computer. It is very dusty with a keyboard attached to it. You've seen machines like in movies before but something tells you this is different." << endl;
	cout << "Dismissing it as old junk you decide to turn around and continue on in the library." << endl;

	std::this_thread::sleep_for (std::chrono::seconds(60));


	// The adventure begins
	// Red text
	cout << "\x1B[31m" << endl;
	cout << "\a*BEEP BEEP BEEP*" << endl;
	cout << "\x1B[0m" << endl;

	cout << "The noise startles you. You turn around. The computer is still blank and lifeless." << endl;
	cout << "You think to yourself 'must have been my imagination' but curiosity gets the best of you. You know you heard something." << endl;
}
