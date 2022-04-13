#include <iostream>
using namespace std;

int main()
{
	//Variables
	string firstName;
	string lastName;
	int age;
	int moneyStat;
	string hungerStat;


	int x;
	int y;

	float dollar;

	//Exercise 1
	cout << "Exercise 1-1 \n" << endl;
	system("pause");

	cout << "\nPlease enter your First Name. ";
	cin >> firstName;

	cout << "\nPlease enter your Last Name. ";
	cin >> lastName;

	cout << "\nHow old are you? ";
	cin >> age;

	cout << "\nHow much money do you have? (Number only) ";
	cin >> moneyStat;

	cout << "\nHave you eaten yet? ";
	cin >> hungerStat;

	cout << "\n\nFirst Name: " << firstName << endl;
	cout << "Last Name:" << lastName << endl;
	cout << "Age: " << age << endl;
	cout << "Financal status: Php" << moneyStat << endl;
	cout << "Has eaten status: " << hungerStat << "\n" << endl;

	system("pause");

	//Exercise 1-2
	cout << "\nExercise 1-2 \n" << endl;
	system("pause");

	cout << "\nPlease enter the first number: ";
	cin >> x;

	cout << "\nPlease enter the second number: ";
	cin >> y;


	cout << "\n" << x << " + " << y << " = " << (x + y) << endl;
	cout << x << " - " << y << " = " << (x - y) << endl;
	cout << x << " * " << y << " = " << (x * y) << endl;
	cout << x << " / " << y << " = " << (x / y) << endl;
	cout << x << " % " << y << " = " << (x % y) << "/n" << endl ;

	system("pause");

	//Exercise 1-3
	cout << "\nExercise 1-2 \n" << endl;
	system("pause");

	cout << "\nInput USD: ";
	cin >> dollar;

	cout << "PHP: " << (dollar * 51.27) << "\n" << endl ;

	system("pause");

	return 0;
}