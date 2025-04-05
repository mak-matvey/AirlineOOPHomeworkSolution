#include "Airline.h"
#include <iostream>

int main()
{
	Airline Main_Airline;

	cout << "Input name of your airline: ";
	cin >> Main_Airline.name;

	cout << "Input country of your airline: ";
	cin >> Main_Airline.country;

	cout << "Input year of foundation of your Airline: ";
	cin >> Main_Airline.foundation_year;

	cout << "Input number of employees of your Airline: ";
	cin >> Main_Airline.employee;

	cout << "Input park size of your airline (number): ";
	cin >> Main_Airline.park_size;

	cout << "FAQ about your airline:" << endl <<
		"Name: " << Main_Airline.name << ", " <<
		"county: " << Main_Airline.country << ", " <<
		"year of foundation: " << Main_Airline.foundation_year << ", "
		<< "amount of employees: " << Main_Airline.employee << ", " <<
		"park size (amount of airplanes): " << Main_Airline.park_size << endl;

	return 0;
}