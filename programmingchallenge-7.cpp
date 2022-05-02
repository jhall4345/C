#include <iostream>
using namespace std;

int main()
{

	string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	double rainfall[12];
	double year_total = 0;
	double highest = rainfall[0];
	double lowest = rainfall[0];
	double avg;
	string low = months[0];
	string high = months[0];

	for (int i = 0; i < 12; i++)
	{
		cout << "Enter rainfall for " << months[i] << ": ";
		cin >> rainfall[i];
		if (rainfall[i] < 0)
		{
			cout << "invalid data (negative rainfall) -- retry" << endl;
			cout << "Enter rainfall for" << months[i];
			cin >> rainfall[i];
		}
		year_total += rainfall[i];
	}
	avg = year_total / 12;

	for (int i = 0; i < 12; i++)
	{
		if (rainfall[i] > highest)
		{
			high = months[i];
			highest = rainfall[i];
		}
	}
	for (int i = 0; i < 12; i++)
	{
		if (rainfall[i] < lowest)
		{
			low = months[i];
			lowest = rainfall[i];
		}
	}

	cout << "Total rainfall: " << year_total << endl;
	cout << "Average rainfall: " << avg << endl;
	cout << "Least rainfall in: " << low << endl;
	cout << "Most rainfall in: " << high << endl;

	return 0;
}