/*****************************************************************
* 
* Author: Zaelfenn Sandow
* 
* Created: 10/17/2022
* 
* Purpose: display a menu that allows options to be picked 
* 
* 
*******************************************************************/




#include <iostream> //for cin/cout

using std::cin;
using std::cout;


const float PI = 3.141529;
int main() {

	float height = 0,
		length = 0,
		radius = 0,
		width = 0,
		area = 0,
		volume = 0,
		base_length = 0;  //a lot of these variables appear in multiple math equations (such as height), it would be silly to declare different height variables for the same general purpose
		
	int choice_1 = 0;  //declaring variables, these will all read as numbers
		
	
	char choice_2 = 0,
		 choice_3 = 0; //these should be entered as letters
		

	cout << "\t\t\tWelcome! Would you like to calculate:"
		<< "\n1. Area"
		<< "\n2. Volume"
		<< "\n\t\t\tPlease enter the number associated with your choice.\n\n";
	cin >> choice_1;

	switch (choice_1) //first menu
	{

	case 1: 
		cout << "You have selected area. Would you like to find the area of:"
			<< "\nA. A rectangle"
			<< "\nB. A circle"
			<< "\nC. A right triangle"
			<< "\nPlease enter the letter associated with your choice.\n\n";
		cin >> choice_2;

			break;
	case 2:
		cout << "You have selected volume. Would you like to find the area of:"
			<< "\nA. A cylinder"
			<< "\nB. A sphere"
			<< "\nPlease enter the letter associated with your choice.\n\n";
		cin >> choice_3;

		break;

	default: //all of the defaults trigger when something is entered incorrectly, and terminate the program early. 
		cout << "\n\n\nInvalid choice selected. Terminating program.";
	}

	if (choice_2 > 0) //second menu(s)
	{
		switch (choice_2)
		{
		case 'a':
		case 'A':
			cout << "\nWhat is the width of your rectangle?\n";
			cin >> width;

			cout << "\nWhat is the length of your rectangle?\n";
			cin >> length;

			area = length * width;

			cout << "\nThe area of your triangle is " << static_cast<float>(area) << " units."; //static cast is useful in case someone wants to enter a number that might result in a double

			break;

		case 'b':
		case 'B':
			cout << "\nWhat is the radius of your circle?\n";
			cin >> radius;

			area = PI * radius * radius;

			cout << "\nThe area of your circle is " << static_cast<float>(area) << " units.";

			break;

		case 'c':
		case 'C':
			cout << "\nWhat is the height of your right triangle?\n";
			cin >> height;

			cout << "\nWhat is the length of the base of your right triangle?\n";
			cin >> base_length;

			area = height * base_length / 2;

			cout << "\nThe area of your right triangle is " << static_cast<float>(area) << " units.";

			break;

		default:
			cout << "\n\n\nInvalid choice selected. terminating program.";
		}
	}
	else if (choice_3 > 0) //this way the program won't try and run a volume solution if the first switch isn't entered correctly. 
	{
		switch (choice_3)
		{
		case 'a':
		case 'A':
			cout << "\nWhat is the height of your cylinder?\n";
			cin >> height;

			cout << "\nWhat is the radius of your cylinder?\n";
			cin >> radius;

			volume = PI * radius * radius * height;

			cout << "\nThe volume of your cylinder is " << static_cast<float>(volume) << " units.";

			break;

		case 'b':
		case 'B':
			cout << "\nWhat is the radius of your sphere?\n";
			cin >> radius;

			volume = radius * radius * radius * PI * 4 / 3;

			cout << "\nThe volume of your sphere is " << static_cast<float>(volume) << " units.";

			break;

		default:
			cout << "\n\n\nInvalid choice selected. terminating program.";
		}
	}
	else; //this may not be necessary but it shows that nothing should be happenening in the case of the other two "if" statements not going off

	return 0;
}