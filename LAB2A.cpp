// ---------------------------------------------------------------
// Programming Assignment:	LAB2A
// Developer:			   Ezeniel Rios
// Date Written:			3/13/2021
// Purpose:				Determine Smallest Number
// ---------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int one, two, smallest;

	cout << "You will be asked to enter two numbers."
		<< "\nThe smallest value will be displayed or"
		<< "a message if they are the same.\n";

	cout << "\nPlease enter a numeric value: ";
	cin >> one;
	cout << "\nPlease eneter a numeric value: ";
	cin >> two;

	cout << endl;
	if (one == two)
		cout << "Values are the same";
	else
	{
		if (one > two)
		{
			smallest = two;
		}
		else
		{
			smallest = one;
		}
		cout << "Thes smallest values is " << smallest << endl;
		
	}

	system("pause");
}
